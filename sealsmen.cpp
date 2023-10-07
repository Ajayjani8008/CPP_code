#include <iostream>
using namespace std;
class Product
{

public:
    int p_id;
    string p_name;
    int p_price;
    virtual void GetData()
    {
        cout << "enter id" << endl;
        cin >> p_id;
        cout << "enter price" << endl;
        cin >> p_price;
        cout << "enter name" << endl;
        cin >> p_name;
    }
};
class wholesaler : public Product
{

public:
    int w_qty;
    int w_price;
    void GetData()
    {
        cout << "enter quntity" << endl;
        cin >> w_qty;
        cout << "enter price" << endl;
        cin >> w_price;
    }
};
class retailer
{

public:
    int r_qty;
    int r_price;
    void GetData3()
    {
        cout << "enter quantity" << endl;
        cin >> r_qty;
        cout << "enter price" << endl;
        cin >> r_price;
    }
};
class sale : public wholesaler, public retailer
{

public:
    int total_sale;
    int total_amt;
    int total_profit;
    void Getdata4()
    {
        total_amt = ((w_qty) * (w_price));
        total_sale = ((r_qty) * (r_price));
        total_profit = ((total_sale) - (total_amt));
        cout << "total_amt :" << total_amt << endl;
        cout << "total_profit :" << total_profit << endl;
        cout << "total_sale :" << total_sale << endl;
    }
};
int main()
{
    sale s1;
    Product p1;
    p1.GetData();
    s1.Getdata4();
    s1.GetData();
    s1.GetData3();
    return 0;
}
