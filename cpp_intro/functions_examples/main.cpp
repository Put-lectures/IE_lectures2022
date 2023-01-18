#include "functions.h"
#include <cmath>
#include <iostream>
using namespace std;
void foo(int a = 1, int b = 2, int c = 3);
void foo(int a, int b, int c) {}

int main()
{
    float tab[100];
    int n;
    cout << calculate_pi() * 5;
    char choice;
    do {
        char choice = menu();
        switch (choice) {
        case '1': {
            pi();
            break;
        }
        case '2': {
            n = get_array(tab);
            break;
        }
        case '3': {
            statistics(tab, n);
            break;
        }
        default: {
            if (query("do you want to exit?")) {
                return 0;
            }
            break;
        }
        } //switch
    } while (choice != '6');
    system("pause");
    return 0;
}
