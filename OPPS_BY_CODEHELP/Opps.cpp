#include <iostream>
using namespace std;
// #include "employeeclass.cpp"
// this is an example of the how to external class includ
class employee
{

private:
    int id;
    string name;

public:
    employee(int age)
    {
        this->age = age;
        cout<<this->age<<endl;
    }
    int age;
    int setid(int i)
    {
        id = i;
    }
    int getid()
    {
        return id;
    }
    string setname(string N)
    {
        this->name = N;
    }
    string getname()
    {
        return name;
    }
};
int main()
{
    employee e1(10);
    employee *e2 = new employee(10);

    cout << " the age is :" << (*e2).age << endl;
    cout << " the age is :" << e2->age << endl;

    e1.age = 10;

    e1.setid(10101);
    cout << e1.getid() << endl;

    e1.setname("ajay jani");
    cout << e1.getname() << endl;

    // cout << " the age is :" << e1.age << endl;

    return 0;
}