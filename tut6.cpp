#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter any number : ";
    cin>>a;
    int i=1;
    while(i<=10){
        cout<<a*i<<endl;
        i++;
    }
    cout<<"Here is your table";
    return 0;
}