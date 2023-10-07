#include <iostream>
#include <string>
using namespace std;
static float pi = 3.14;
class shape
{
public:
    int r;
    int l;
    int w;
    virtual void display() {}
};
class circle : public shape
{
public:
    void display()
    {

        cout << "enter redius of the circle:" << endl;
        cin >> r;
        cout << "area of the circle is :" << pi * r * r << endl;
    }
};
class rectangle : public shape
{
public:
    void display()
    {

        cout << "enter length and widgth onr by onr of the rectangle:" << endl;
        cin >> l;
        cin >> w;
        cout << "area of the revtanfle is:" << l * w << endl;
    }
};
class square : public shape
{
public:
    void display()
    {

        cout << "enter length of the square:" << endl;
        cin >> l;
        cout << "area of the square is:" << l * l << endl;
    }
};
int main()
{
    circle c1;
    c1.display();
    rectangle r1;
    r1.display();
    square s1;
    s1.display();
    return 0;
}