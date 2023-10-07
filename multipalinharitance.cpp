#include <iostream>
using namespace std;
class bhavnagar
{
public:
    int a = 10;
    string b = "ajay";
    float studant = 100079;
};
class rajkot
{
public:
    int c = 177;
    float jobless = 11876;
};
class surat
{
public:
    float population = 127000000;
};
class gujarat : public bhavnagar, public rajkot, public surat
{
public:
    string myname = "ajay_jani";
};
int main()
{
    gujarat a1;
    cout << "Your details you are want is .........\n"
         << a1.a << endl
         << a1.b << endl
         << a1.studant << endl
         << a1.c << endl
         << a1.jobless << endl
         << a1.myname << endl
         << a1.population << endl
         << a1.studant << endl;
    return 0;
}
