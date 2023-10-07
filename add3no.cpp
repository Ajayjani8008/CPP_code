#include <iostream>
using namespace std;
class addition
{
    int n2;
    int n3;

public:
    int sum;
    addition(int N2, int N3)
    {
        n2 = N2;
        n3 = N3;
    }
    void display()
    {
        int n1;
        cout << "enter the number:" << endl;
        cin >> n1;
        sum = n1 + n2 + n3;
        cout << "sum:" << sum << endl;
    }
};

int main()
{
    addition A1(10, 20);
    A1.display();
    return 0;
}