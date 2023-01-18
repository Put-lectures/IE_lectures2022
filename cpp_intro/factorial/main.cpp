#include <iostream>

using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    cout << n << endl;
    return factorial(n - 1) * n;
}
int factorial_iter(int n)
{
    int acc = 1;
    for (int i = 1; i <= n; i++) {
        cout << i;
        acc *= i;
    }
    return acc;
}
int main()
{
    cout << factorial(5) << "   " << factorial_iter(500000) << endl;
    return 0;
}
