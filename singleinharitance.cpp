#include <iostream>
using namespace std;
class account
{
public:
    float salary = 6000;
};
class programmer : public account
{
public:
    float bonus = 5000;
};
int main()
{
    programmer p1;
    cout << "salary:" << p1.salary << endl;
    cout << "bonus:" << p1.bonus << endl;
    return 0;
}