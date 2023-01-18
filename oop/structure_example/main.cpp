#include <iostream>

using namespace std;
struct sRect
{
    float width;
    float height;
    float xc;
    float yc;
};

void move(sRect &rect, float delta_x, float delta_y)
{
    rect.xc += delta_x;
    rect.yc += delta_y;
}

float cricumference(const sRect &rect)
{
    return rect.width * 2 + rect.height * 2;
}

void print(const sRect &rect)
{
    cout << "w: " << rect.width << endl
         << "h: " << rect.height << endl
         << "center:" << rect.xc << ", " << rect.yc << endl;
}
int main()
{
    sRect rectangle = {10, 5, 0, 0};

    //    rectangle.yc = 5;
    move(rectangle, 3, 1);

    print(rectangle);

    cout << "circumference: " << cricumference(rectangle);

    return 0;
}
