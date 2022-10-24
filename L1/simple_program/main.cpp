#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;
// the main function, here the program starts

int main()
{
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        int var = 1;
        cout << var;
        break;
    }
    case 2: {
        break;
    }
    }

    if (a > 3) {
        double value = 1.0;
        cout << value;
    }

    cout << value;

    //    double c = 4, angle = 30;
    //    double result = c * sin(angle / 180 * M_PI);
    //    //    cout << weight / ((height / 100.0) * (height / 100.0));
    //    cout << result;
    //    cout << pow(2, 0.25);
    //    int counter = 0;
    //Step 1
    //    counter = counter + 1;
    //    counter++;
    //    cout << counter << endl;

    //    //step 2
    //    counter = counter + 1;
    //    cout << counter;

    //    int a = 3, b = 4;
    //    float c;

    //    cout << "Enter the sides length ";
    //    cin >> a >> b;
    //    float area = a * b / 2.0;
    //    c = sqrt(a * a + b * b);
    //    //    std::cout << "hypotenuse of right triangle with legs " << a << " and " << b << " is " << c
    //    //              << ", the area is" << area << std::endl;
    //    printf("hypotenuse of right triangle with legs %d and %d is\n %10.2e, the area is\n %10.2e",
    //           a,
    //           b,
    //           c,
    //           area);
    char first_name[20], last_name[20];
    cout << "What is your name?";
    cin >> first_name >> last_name;
    //    cin.getline(name, 20);
    //    cout << "Hello " << name << endl;
    printf("Hello %s %s\n", first_name, last_name);
    char full_name[100];
    //    strcpy(full_name, first_name);
    //    strcat(full_name, last_name);
    //    cout << full_name;
    sprintf(full_name, "%s %s", first_name, last_name);
    cout << full_name;
    //    full_name = first_name + last_name;
    int a = 5, b = 6, c;
    c = a + static_cast<float>(b);

    return 0;
}
