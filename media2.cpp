#include<iostream>
using namespace std;
class media
{
    public:
    string title;
    int price;
    virtual void display(){};

};
class harddisk:public media
{
    public:
    string hdd_type;
    int qty;
    harddisk(string hdd_type,int qty)
    {
        this->hdd_type=hdd_type;
        this->qty=qty;
    }
    void display()
    {
        cout<<"enter the tital"<<endl;
        cin>>title;
    }
};
