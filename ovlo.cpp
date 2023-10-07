#include <iostream>
using namespace std;
class test
{
    int num;

public:
    test() : num(8) {}
    void operator++()
    {
        num = num + 5;
    }
    void print()
    {
        cout << "the count is:" << num;
    }
};

int main()
{
    test tt;
    ++tt;
    ++tt;
    tt.print();
    return 0;