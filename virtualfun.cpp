#include <iostream>
using namespace std;
class A
{
public:
    void dispaly()
    {
        cout << "base class id invoked" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "Derived Class is Involed:" << endl;
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
    a->dispaly();
}
