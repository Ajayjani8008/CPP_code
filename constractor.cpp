#include <iostream>
using namespace std;
class my_name
{
public:
    my_name()
    {
        cout << "default constrator invoked" << endl;
    }
};
int main()
{
    my_name e1;//creatong an object of my_name;
    my_name e2;
    return 0;
}
