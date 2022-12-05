#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n < 5) //here 'n'is considered in thousands
    cout<<"broke";
    else if (n < 50)
    cout<<"middle class";
    else 
    cout<<"filthy rich";
}
