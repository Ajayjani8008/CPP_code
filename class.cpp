#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int x, int y, int z); // declaration
    void getdata()
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value of c is" << c << endl;
        cout << "the value of d is" << d << endl;
        cout << "the value of e is" << e << endl;
    }
};
void Employee::setdata(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}
int main()
{
    Employee ajay;
    ajay.d = 121;
    ajay.e = 1551;
    ajay.setdata(1211, 4546, 357);
    ajay.getdata();

    return 0;
}
