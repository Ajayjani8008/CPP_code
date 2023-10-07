#include <iostream>
using namespace std;
static float P = 10000;
static int N = 3;

class intrest
{
public:
    float R;
    void clac()
    {
        cout << "enter rate of the amount:" << endl;
        cin >> R;
        cout << "your intrast of the amount is:" << ((P * N * R) / 100) << endl;
    }
};
int main()
{
    intrest S1;
    S1.clac();
    return 0;
}