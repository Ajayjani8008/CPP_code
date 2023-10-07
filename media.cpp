#include <iostream>
#include <string>
using namespace std;
class media
{
public:
    string title;
    int price;
    media(char Title, int Price)
    {
        title = Title;
        price = Price;
    }
    virtual void display()
    {
        cout << "title" << title << endl;
        cout << "price" << price << endl;
    }
};
class harddisk : public media
{
    int hdd_type, qty;
    harddisk(int h, int q)
    {
        hdd_type = h;
        qty = q;
    }
    void display()
    {
        cout << "hdd_type" << hdd_type << endl;
        cout << "qty:" << qty << endl;
    }
};
class pendrive : public media
{
public:
    int pendrive_type, qty;
    pendrive(int pendrive, int qty)
    {
        this->pendrive_type = pendrive_type;
        this->qty = qty;
    }
    void display()
    {
        cout << "pendrive_type:" << pendrive_type << endl;
        cout << "pendrive_type:" << pendrive_type << endl;
    }
};
int main()
{
}