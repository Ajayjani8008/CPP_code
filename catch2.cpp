#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream my_name;
    my_name.open("D:\\AJAYJANI\\CPP\\my_name.txt", ios::app);
    if (!my_name)
    {
        cout << "file not created";
    }
    else
    {
        cout << "file created succesfully!";
        my_name << "my home in village";
        string arg;
        while (getline(my_name, arg))
        {
            cout << arg;
        }

        my_name.close();
    }

    return 0;
}
