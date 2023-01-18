#include <iostream>
#include <regex>
#include <vector>
using namespace std;

int main()
{
    vector<string> codes = {"TX77845", "TX77845-1234", "ATM77845", "A12346", "ARRR14536"};
    regex pattern(R"(^[A-Z-a-z]{2,3}\d{5}(-\d{4})?)");
    smatch matches;
    for (auto &text : codes) {
        if (std::regex_match(text, matches, pattern)) {
            cout << text << "is a ZIP code" << endl;
        } else
            cout << text << "is innorrect ZIP" << endl;
    }

    return 0;
}
