#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int tab[5];
    //    for (int i = 0; i < 5; i++) {
    //        cin >> tab[i];
    //    }
    //    int i = 0;
    //    while (i < 5) {
    //        cout << tab[i];
    //        i++;
    //    }

    //    char word[100];
    //    fstream file("/home/piotr/license.txt", ios::in);
    //    if (file.is_open()) {
    //        while (!file.eof()) {
    //            file >> word;

    //            cout << word << endl;
    //        }
    //    }

    //    cout << "Are you sure?(y/n)";

    //    char answer;
    //    do {
    //        cout << "Are you sure?(y/n)";
    //        cin >> answer;

    //        if (answer == 'y' || answer == 'Y') {
    //            cout << "your answer is yes.";
    //        }
    //    } while (!(answer == 'y' || answer == 'Y' || answer == 'n' || answer == 'N'));

    //    //    (answer != 'y' && answer!='Y' && answer != 'n' && answer != 'N')

    //    int n;
    //    cout << "enter the value to verified";
    //    cin >> n;
    //    bool is_prime = true;
    //    for (int i = 2; (i < sqrt(n) && is_prime; i++) {
    //        if (n % i == 0) {
    //            is_prime = false;

    //            cout << i << endl;
    //            //            bresak;
    //        }
    //    }

    //Factorial
    //    int acc = 1;
    //    for (int i = 1; i < 5; i++) {

    //        acc *= i;
    //    }
    //    cout << acc;

    //    float grades[100];
    //    cout << "What is the number of grades?";
    //    int N;
    //    cin >> N;

    //    for (int i = 0; i < N; i++) {
    //        cin >> grades[i];
    //    }

    //    for (int i = 0; i < N; i++) {
    //        cout << grades[i] << endl;
    //    }

    //average grade
    //    float sum = 0;
    //    for (int i = 0; i < N; i++) {
    //        sum += grades[i];
    //    }
    //    cout << "the average grade is: " << sum / N << endl;
    //    //the worst grade
    //    float min = grades[0];
    //    for (int i = 1; i < N; i++) {
    //        if (min > grades[i]) {
    //            min = grades[i];
    //        }
    //    }
    //    cout << "The worst grade is: " << min << endl;
    ///e^x calculation
    //    double sum = 1;
    //    double x = 1;
    //    double factorial = 1;
    //    int N = 100;
    //    for (int i = 1; i < N; i++) {
    //        factorial *= i;
    //        sum += pow(x, i) / factorial;
    //    }
    //    cout << sum;

    int array[] = {5, 7, 9, 12, 19, 30, 100};
    int N = 7;
    int val = 30;
    //    for (int i = 0; i < 7; i++) {
    //        if (array[i] == val) {
    //            cout << "value was found";
    //            break;
    //        }
    //    }
    //    float min = grades[0];
    //    for (int i = 1; i < N; i++) {
    //        if (min > grades[i]) {
    //            min = grades[i];
    //        }
    //    }
    //    cout << "The worst grade is: " << min << endl;
    //binary search
    int bottom_idx = 0, top_index = N - 1;

    while (bottom_idx <= top_index) {
        int mid_index = (top_index + bottom_idx) / 2;
        if (array[mid_index] == val) {
            cout << "Value was found";
            break;
        } else {
            if (array[mid_index] < val) {
                bottom_idx = mid_index + 1;
            } else {
                top_index = mid_index - 1;
            }
        }
    }
    if (bottom_idx > top_index) {
        cout << "The element wa not found";
    }

    //GCD
    int a = 22, b = 33;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    cout << "GCD is " << a << endl;
    return 0;
}
