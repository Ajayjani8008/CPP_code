using namespace std;
#include <iostream>
int main()
{
    int arr[] = {1, 2, 3};
    cout << arr[2] << endl;
    int marks[6];
    for (int i = 1; i < 6; i++)
    {
        cout << "enter the marks of" << i << "th student" << endl;
        cin>>marks[i];        
    }
    for (int i = 1; i < 6; i++)
    {
        cout << " marks of the " << i << "th student"<<marks[i] << endl;
         
    }
    int arr2[2][3]={{1,2,3},{4,5,6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cout<<"the value  at  "<<i<< " , "<<j<<" is "<<arr2[i][j]<<endl;
        }
           
    }



    int a=323;
    cout<<(float)a/10<<endl;
    float b=1028.37;
    cout<<(float)(a/b)<<endl;
    

    return 0;
}