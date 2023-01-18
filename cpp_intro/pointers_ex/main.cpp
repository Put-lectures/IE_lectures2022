#include <iostream>

using namespace std;
void Swap(int *a, int *b)
{
    //    a = b;
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    long long N;
    double *var;
    cin >> N;
    var = new double[N];

    for (int i = 0; i < N; i++)
        cin >> var[i];

    delete[] var;

    return 0;
}
