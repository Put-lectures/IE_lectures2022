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

    float grades[100];
    cout << "What is the number of grades?";
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> grades[i];
    }

    //    for (int i = 0; i < N; i++) {
    //        cout << grades[i] << endl;
    //    }

    //average grade
    float sum = 0;
    for (int i = 0; i < N; i++) {
        sum += grades[i];
    }
    cout << "the average grade is: " << sum / N << endl;
    //the worst grade
    float min = grades[0];
    for (int i = 1; i < N; i++) {
        if (min > grades[i]) {
            min = grades[i];
        }
    }
    cout << "The worst grade is: " << min << endl;

    return 0;
}
