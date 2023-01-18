#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int a = 5123, b = 6456, c = 12;
    fstream file("data.txt", ios::in);

    while (!file.eof()) {
        //        file >> a >> b >> c;
        string line;
        getline(file, line);
        stringstream str(line);

        string val;
        while (getline(str, val, ',')) {
            cout << val << endl;
        }

        cout << line;
        //        if (file.good())
        //        {
        //            cout << a << "," << b << "," << c << endl;
        //        }
    }
    //    file << a << "," << b << "," << c;
    //    file.write((char *) (&a), sizeof(a));
    //    file.write((char *) (&b), sizeof(b));
    //    file.write((char *) (&c), sizeof(c));

    file.close();
    return 0;
}
