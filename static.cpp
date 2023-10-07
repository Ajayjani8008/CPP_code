#include <iostream>
using namespace std;
class account
{
public:
    int accno;
    string name;
    static float rateofinterest;
    account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }
    void display()
    {
        cout << accno << "" << rateofinterest << endl;
    }
};
float account::rateofinterest = 6.5;
int main()
{
    account a1(101, "ajay_jani");
    account a2(102, "ajay_dsfjgiujnjvb ef");
    a1.display();
    a2.display();

    return 0;
}