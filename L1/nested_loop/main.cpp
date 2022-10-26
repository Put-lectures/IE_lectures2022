#include <iostream>

using namespace std;

int main()
{
    //    // Rectangle
    //    int N = 5, M = 10;
    //    for (int i = 0; i < N; i++) {
    //        for (int j = 0; j < M; j++) {
    //            if (j == 0 || j == M - 1 || i == 0 || i == N - 1)
    //                cout << "*";
    //            else
    //                cout << " ";
    //        }
    //        cout << endl;
    //    }

    //    // Circle
    //    int R = 5;
    //    for (int i = -R; i <= R; i++) {
    //        for (int j = -R; j <= R; j++) {
    //            //            if (j == 0 || j == M - 1 || i == 0 || i == N - 1)
    //            if (i * i + j * j <= R * R)
    //                cout << "*";
    //            else
    //                cout << " ";
    //        }
    //        cout << endl;
    //    }

    int array[] = {10, 11, -5, 8, 1, 6};
    int size = 6;
    int size_counter = size;
    bool is_swapped;
    do {
        is_swapped = false;
        for (int i = 0; i < size_counter - 1; i++) //db no1
        {
            if (array[i] > array[i + 1]) {
                int tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                is_swapped = true;
                //db no 2
            }
        }
        size_counter--;
    } while (is_swapped);

    for (int i = 0; i < size; i++)
        cout << array[i] << endl;

    return 0;
}
