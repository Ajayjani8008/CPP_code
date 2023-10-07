#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    string name;
    float salary;
    employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << "" << name << "" << salary << endl;
    }
};
int main()
{
    employee e1(101, "jani_ajay", 9834);
    employee e2(102, "jani_amit", 9344);
    e1.display();
    e2.display();
    return 0;
}