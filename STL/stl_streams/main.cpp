#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>
using namespace std;

int main()
{
    string from = "/home/piotr/license.txt", to = "/home/piotr/unique_words.txt";
    cin >> from >> to;
    ifstream is(from);
    ofstream os(to);
    // get source and target file names
    // open input stream
    // open output stream
    istream_iterator<string> ii(is);
    istream_iterator<string> eos;
    ostream_iterator<string> oo(cout, "\n");
    set<string> b(ii, eos);
    //    sort(b.begin(), b.end());
    copy(b.begin(), b.end(), oo);
    return 0;
}
