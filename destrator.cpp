#include <iostream>
using namespace std;
class ajay
{
public:
    int id;
    string name;
    float salary;
    ajay(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display()
    {
        cout << id << " " << name << " " << salary << endl;
    }
};
int main()
{
    ajay e1(101, "ajay", 10000000);
    ajay e2(102, "jani", 20000000);
    return 0;
}
