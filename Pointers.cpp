using namespace std;
#include<iostream>
#include<string>
int main(){
    //pointer
    int a=34;
    int *ptra;
    ptra=&a;
    cout<<"the value of the a  on ptra is"<<*ptra<<endl;
    cout<<"the vlaue of the ptra is " <<ptra<<endl;
    cout<<"the adress  of the a is " <<ptra<<endl;


    return 0;
}