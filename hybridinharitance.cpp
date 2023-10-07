#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void get_a()
    {
        std::cout << "enter the value of a:" << std::endl;
        cin >> a;
    }
};
class B : public A
{
public:
    int b;
    void get_b()
    {
        std::cout << "eneter the value of b:" << std::endl;
        cin >> b;
    }
};
class C
{
public:
    int c;
    void get_c()
    {
        std::cout << "enter the value of c:" << std::endl;
        cin >> c;
    }
};
class D : public B, public C
{
public:
    int d;
    void mul()
    {
        get_a();
        get_b();
        get_c();
        std::cout << "Multiplication of a,b,c is ::" << a * b * c << std::endl;
    }
};
int main()
{
    D d;
    d.mul();
    return 0;
}
