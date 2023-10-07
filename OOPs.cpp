#include <iostream>
using namespace std;
class Employee
{
public:
    string NAME;
    string COMPANY;
    int AGE;
    void introself()
    {
        cout << "NANE\t:" << NAME << endl;

        cout << "COMPANY\t:" << COMPANY << endl;
        cout << "AGE\t:" << AGE << endl;
    }
    Employee(string name, string company, int age)
    {
        NAME = name;
        COMPANY = company;
        AGE = age;
    }
};
int main()
{
    Employee emp1("pandit", "google", 67);
    Employee emp2("ajay", "IANT", 25);
    emp1.introself();
    emp2.introself();

    return 0;
}