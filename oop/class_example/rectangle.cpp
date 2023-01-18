#include <iostream>
#include <rectangle.h>
using namespace std;
//cRect::cRect() : width_(10), height_(5), xc_(0), yc_(0)
//{
//    //    width_ = 10;
//    //    height_ = 5;
//    //    xc_ = 0;
//    //    yc_ = 0;
//}

//cRect::cRect(float h, float w) : width_(w), height_(h), xc_(0), yc_(0) {}

cRect::cRect(float h, float w, float xc, float yc) : width_(w), height_(h), xc_(xc), yc_(yc)
{
    array_ = new float[int(h * w)];
}

void cRect::move(float delta_x, float delta_y)
{
    xc_ += delta_x;
    yc_ += delta_y;
}

float cRect::cricumference()
{
    return width_ * 2 + height_ * 2;
}

void cRect::print() const
{
    cout << "w: " << width_ << endl
         << "h: " << height_ << endl
         << "center:" << xc_ << ", " << yc_ << endl;
}

void cRect::set_width(float width)
{
    if (width > 0)
        width_ = width;
}

float cRect::width() const
{
    return width_;
}

float cRect::height() const
{
    return height_;
}

void cRect::set_height(float newHeight)
{
    height_ = newHeight;
}

cRect::~cRect()
{
    delete[] array_;
}
