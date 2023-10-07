#include <iostream>
using namespace std;
class taravada
{
public:
    float total_student = 6000;
};
class amreli : public taravada
{
public:
    float no_of_std = 5000;
};
class gujrat : public amreli
{
    public:
    float all = 10000;
};

int main()
{
    gujrat g1;
    cout << "student of the travda gurukul:" << g1.total_student << endl;
    cout << "student of amreli:" << g1.no_of_std << endl;
    cout << "all student:" << g1.all << endl;
    return 0;
}