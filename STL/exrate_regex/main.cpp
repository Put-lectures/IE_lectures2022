#include <fstream>
#include <iostream>
#include <map>
#include <regex>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    map<string, double> rates;
    fstream file("/home/piotr/workspace/IE_lectures2022/exrate.html", ios::in);
    regex pat(R"(<td class="right">(\d+) (\w{3})<\/td> <td class="right">(\d+,\d+)<\/td>)");
    if (file.is_open()) {
        stringstream str;
        str << file.rdbuf();
        string text = str.str();

        smatch matches;
        // matched strings go here
        while (regex_search(text, matches, pat)) {
            //cout << matches[0] << endl;
            cout << matches[1] << " - " << matches[2] << ":" << matches[3] << endl;

            string rate_str = matches[3].str();
            rate_str[1] = '.';

            rates[matches[2]] = stod(rate_str) / stoi(matches[1]);
            text = matches.suffix();
        }
    }

    for (auto &el : rates) {
        cout << el.first << " - " << el.second << endl;
    }

    cout << "USD exchange rate is " << rates["USD"] << endl;

    return 0;
}
