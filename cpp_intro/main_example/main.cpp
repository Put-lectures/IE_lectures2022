#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    //    cout << argc << endl;
    //    for (int i = 0; i < argc; i++)
    //        cout << argv[i] << endl;
    if (argc == 1) {
        cout << "Hello stranger." << endl;
    } else {
        cout << "Hello " << argv[1] << endl;
    }
    return 0;
}
