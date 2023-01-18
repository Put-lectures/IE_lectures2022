#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <vector>

using namespace std;
float sum(float *array, int n)
{
    float acc = 0;
    for (int i = 0; i < n; i++)
        acc = acc + array[i];
    return acc;
}
double sum(double *array, int n)
{
    double acc = 0;
    for (int i = 0; i < n; i++)
        acc = acc + array[i];
    return acc;
}
struct sPerson
{
    string name;
    int age;
};

int main()
{
    //    float *array_ptr = new float[10];
    //    double array[] = {0, 6, 8, 3, -0.1, 5, 10};
    //    cout << sum(array, 7);
    //    auto i = "The text";
    //    vector<string> texts = {"One", "Two", "Three", "Four"};
    //    vector<int> array = {1, 3, 3, 6, 6, 6, 7, 8, 6, 8};
    //    list<double> alist = {1, 3, 6, 8};

    //    for (int i = 0; i < 100; i++) {
    //        alist.emplace_back(rand());
    //        cout << alist.size() << " - " << endl;
    //    }
    //    for (int i = 0; i < alist.size(); i++) {
    //        cout << alist[i] << endl;
    //    }
    //    auto itr = texts.begin();
    //    cout << *itr;
    //    itr++;
    //    cout << *itr;

    //    for (auto itr = alist.begin(); itr != alist.end(); itr++) {
    //        if (*itr == 6) {
    //            itr = alist.emplace(itr, -6);
    //            itr++;
    //        }
    //    }

    //    for (auto &el : alist)
    //        //        el = 0;
    //        cout << el << endl;
    //    //    delete[] array_ptr;

    map<string, int> words;
    //    words["the"] = 1;
    fstream file("/home/piotr/license.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            string word;
            file >> word;
            words[word]++;
        }
    }

    list<pair<string, int>> words_v(words.begin(), words.end());

    words_v.sort([](const pair<string, int> &e1, const pair<string, int> &e2) {
        return e1.second < e2.second;
    });
    //    sort(words_v.begin(),
    //         words_v.end(),
    //         [](const pair<string, int> &e1, const pair<string, int> &e2) {
    //             return e1.second < e2.second;
    //         });

    //    pair<string, int> pair_v;
    //    pair_v.second
    //    for (auto &el : words) {
    //        cout << el.first << " - " << el.second << endl;
    //    }

    for (auto &el : words_v) {
        cout << el.first << " - " << el.second << endl;
    }

    return 0;
}
