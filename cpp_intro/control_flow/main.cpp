#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int choice;
    int a = 5, b = 6;
    cout << "MENU:\n1- calculate sum\n12- multiply\n30 or 60 - subtract\n";
    cin >> choice;
    switch (choice) {
    case 1: {
        int tmp = a + b;
        cout << tmp << endl;
        //        break;
    }
    case 12:
        cout << a * b << endl;
        break;
    case 30:
    case 60:
        cout << a - b << endl;
        break;
    default:
        cout << "wrong operation";
    }
}
