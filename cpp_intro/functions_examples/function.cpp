#include "functions.h"
using namespace std;

char menu()
{
    cout << "1 - calculate Pi" << endl
         << "2 – get fp array" << endl
         << "3 – calculate statics" << endl
         << "4 - sorting" << endl
         << "5 – anagram" << endl
         << "6 - exit" << endl;
    char sel = getchar();

    return sel;
}
float calculate_pi(int n)
{
    double pi = 0;
    for (int i = 0; i < n; i++)
        pi = pi + 4.0 * pow(-1, i) / (2 * i + 1);
    return pi;
}

void pi()
{
    int k;
    cout << "enter iteration count" << endl;
    cin >> k;

    cout << calculate_pi(k) << endl;
}

int get_array(float *array)
{
    int n;
    cout << "enter number of elements" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> array[i];
    return n;
}
void calculate_stats(float *array, int n, float &min, float &max, float &mean)
{
    min = array[0];
    max = array[0];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
        if (array[i] > max)
            max = array[i];
        if (min > array[i])
            min = array[i];
    }
    mean = sum / n;
}
void statistics(float *array, int n)
{
    float min, max, average;
    calculate_stats(array, n, min, max, average);
    cout << "Mean value  " << average << ", minvalue: " << min << ", max value: " << max << endl;
}

void foo(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

int query(const char *question)
{
    cout << question;
    do {
        char answer = getchar();
        switch (answer) {
        case 'y':
        case 'Y':
            return 1;
        case 'n':
        case 'N':
            return 0;
        }
    } while (1);
}
