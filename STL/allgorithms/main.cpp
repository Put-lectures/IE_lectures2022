#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
struct sPerson
{
    string name;
    int age;
};

bool pred(double a1, double a2)
{
    return fabs(a1) > fabs(a2);
}

bool cmp_by_name(const sPerson &p1, const sPerson &p2)
{
    return p1.name < p2.name;
}

bool cmp_by_age(const sPerson &p1, const sPerson &p2)
{
    if (p1.age == p2.age)
        return p1.name < p2.name;
    else
        return p1.age < p2.age;
}

bool threshold(double val)
{
    return val < 7;
}

void print(const sPerson &p)
{
    cout << p.name << " - " << p.age << endl;
}

struct sThreshold
{
    double th_;
    bool operator()(double val) { return val < th_; }
};

int main()
{ //    vector<double> arr = {1, 2, 3, -6, 10, -7, 13, -19};

    //    //Person sorting algorithms
    //    vector<sPerson> arr = {{"Smith", 18}, {"Lee", 25}, {"Clinton", 25}, {"Balck", 30}};
    //    sort(arr.begin(), arr.end(), cmp_by_age);
    //    sort(arr.begin(), arr.end(), [](const sPerson &p1, const sPerson &p2) {
    //        return p1.name < p2.name;
    //    });
    //    for (auto &el : arr)
    //        //        cout << el << endl;
    //        print(el);

    vector<double> arr = {1, 2, 3, -6, 10, -7, -6, 13, -19};
    //    double limit = 0;
    //    cout << count_if(arr.begin(), arr.end(), [limit](double val) { return val < limit; });

    sThreshold th;
    th.th_ = 0;

    cout << count_if(arr.begin(), arr.end(), th);

    return 0;
}
