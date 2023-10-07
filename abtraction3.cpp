#include <iostream>
using namespace std;
class sum
{
private:
    int x, y, z;

public:
    void add()
    {
        cout << "entr two number :";
        cin >> x >> y;
        z = x + y;
        cout << "sum of two number is:" << z << endl;
    }
};
int main()
{
    sum sm;
    sm.add();
    return 0;
}