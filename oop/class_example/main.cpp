#include <iostream>
#include <rectangle.h>
using namespace std;

void foo(const cRect &rect)
{
    cout << rect.width() << ", " << rect.height() << endl;
}

int main()
{
    {
        cRect rectangle = {5, 7, 10};
        //= {5, 10, 0, 0};

        rectangle.move(3, 1);

        rectangle.print();

        cout << rectangle.width() << ", " << rectangle.height() << endl;
        cout << "circumference: " << rectangle.cricumference();
    }
    return 0;
}
