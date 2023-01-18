#include <iostream>

using namespace std;

int counter()
{
    static int cnt = 0;
    cnt++;
    return cnt;
}

class foo
{
    int counter_;

    static int s_counter_;

public:
    foo() : counter_(0)
    {
        counter_++;
        s_counter_++;
    }
    ~foo()
    {
        s_counter_--;
        if (s_counter_ == 0) {
            //do sth
        }
    }
    int counter() { return counter_; }
    static int s_counter() { return s_counter_; }
};

int foo::s_counter_ = 0;
int main()
{
    cout << counter() << endl;
    cout << counter() << endl;
    cout << counter() << endl;

    cout << foo::s_counter() << endl;

    foo a;
    cout << a.counter() << ", " << a.s_counter() << endl;
    cout << foo::s_counter() << endl;
    {
        foo b;
        cout << a.counter() << ", " << a.s_counter() << endl;
        cout << b.counter() << ", " << b.s_counter() << endl;
    }
    cout << foo::s_counter() << endl;
    return 0;
}
