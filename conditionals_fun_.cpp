using namespace std;
#include <iostream>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int age;
    cout << "Enter your age " << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "you are now teenager";
        break;
    case 18:
        cout << "you are noe under 20";
        break;
    case 50:
        cout << "you are sweet";
        break;

    default:
        cout << "enter your age " << endl;
        int a;
        cin >> a;
        cout << "your age is " << a << endl;
        break;
    }
    // while do while for loops

    // funtion
    int a, b;
    cout << "enter the number 2:" << endl;
    cin >> a;
    cin >> b;
    cout << "the sum of the 2 number is " << add(a, b) << endl;
    return 0;
}