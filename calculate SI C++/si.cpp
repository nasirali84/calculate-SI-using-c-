#include <iostream>
using namespace std;

int main()
{
    cout<<"Calculate Simple Intrest"<<endl;
    int a, i, t;
    cout<<"Enter Amount: ";
    cin>>a;
    cout<<"Enter Intrest: ";
    cin>>i;
    cout<<"Enter Time: ";
    cin>>t;
    
    cout<<"Simple intrest is: "<<a*i*t/100;
}