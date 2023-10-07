using namespace std;
#include <iostream>
#include <string>
class employee
{
public:
    string name;
    int salary;
    employee(string name, int salary, int sp)
    {
        this->name = name;
        this->salary = salary;
        this->password = sp;
    }
    void printderails()
    {
        cout << "name is  " << this->name << "  salary " << this->salary << endl;
    };
    void getpassword(){
        cout<<"the password is  "<<this->password<<endl;
    }

private:
    int password;

};
class Programmmers:public employee{
    public://this is inharitance in cpp
    
    int errors;
};

int main()
{
    employee har("ajay by constractor", 10000,12121);
    // har.name = "ajay";
    // har.salary = 100;
    har.printderails();
    // cout<<har.password<<endl;   this is  in privet contant by its class 
    har.getpassword();

    

    return 0;
}