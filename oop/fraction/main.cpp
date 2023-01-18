#include <cmath>
#include <iostream>
using namespace std;
class cFraction
{
    int den_;
    int num_;

public:
    cFraction(int d = 0, int n = 1) : den_(d), num_(n) {}
    //    cFraction add(const cFraction &f2)
    cFraction operator+(const cFraction &f2)
    {
        cFraction tmp;

        tmp.den_ = this->den_ * f2.num_ + f2.den_ * this->num_;
        tmp.num_ = this->num_ * f2.num_;
        return tmp;
    }
    //    cFraction mul(const cFraction &f2) const
    cFraction operator*(const cFraction &f2) const
    {
        cFraction tmp;

        tmp.den_ = this->den_ * f2.den_;
        tmp.num_ = this->num_ * f2.num_;
        return tmp;
    }
    //    cFraction sub(const cFraction &f2)
    cFraction operator-(const cFraction &f2)
    {
        cFraction tmp;

        tmp.den_ = this->den_ * f2.num_ - f2.den_ * this->num_;
        tmp.num_ = this->num_ * f2.num_;
        return tmp;
    }
    /*float decimal()*/
    operator float() { return static_cast<float>(den_) / num_; }
    void print() { cout << den_ << "/" << num_ << endl; }
    friend cFraction operator+(int v, const cFraction &f);
    friend istream &operator>>(istream &str, cFraction &fraction);
    friend ostream &operator<<(ostream &str, const cFraction &fraction);
};
cFraction operator*(int v, const cFraction &f2)
{
    return f2 * v; //f2.operator*(cFraction(v));
}
cFraction operator+(int v, const cFraction &f)
{
    cFraction tmp;

    tmp.den_ = v * f.num_ + f.den_;
    tmp.num_ = f.num_;
    return tmp;
}

istream &operator>>(istream &str, cFraction &fraction)
{
    cout << "Enter denominator and numerator: ";
    str >> fraction.den_ >> fraction.num_;
    return str;
}

ostream &operator<<(ostream &str, const cFraction &fraction)
{
    str << fraction.den_ << "/" << fraction.num_ << endl;
    return str;
}

int main()
{
    cFraction fr(5);

    cFraction f1(1, 5), f2(3, 2);
    cin >> f2; //    operator>>(cin, f2);

    //    cFraction f3 = (f1.add(f2.mul(f1))).sub(5);
    int a = 0;

    cFraction f3 = 3 + f1 + 3 * f2 * f1; // - 5;

    cout << f1 << f2 << f3;
    //f1.print();
    //    f2.print();
    //    f3.print();

    cout << static_cast<float>(f3);
    cout << sin(f3);

    return 0;
}
