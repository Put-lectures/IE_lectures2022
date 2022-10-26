#include <iostream>

using namespace std;

int main()
{
    //integers range
    int acc = 1;
    for (int i = 1; i < 20; i++) {
        acc *= i;
        cout << i << " - " << acc << endl;
    }
    cout << acc;
    //float numeric errors
    float dt = 0.1, time = 0, freq = 10;
    for (int i = 0; i < 1000000; i++) {
        time += dt;
        //        float y = sin(2 * M_PI * freq * time);
        //do something
    }
    cout.precision(15);
    cout << time;
    return 0;
}
