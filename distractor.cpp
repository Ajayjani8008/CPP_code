#include <iostream>
using namespace std;
class Employee
{
public:
    int id; // data number
    string name;
    float salary;
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout <<"\n"<<id<< "\n" << name << "\n" << salary << endl;
    }
};
int main()
{
    Employee e1(101, "ajay", 394495);
    Employee e2(102, "jani", 348203);
    e1.display();
    e2.display();
    return 0;
}
