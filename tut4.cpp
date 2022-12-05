#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 3, b=44, c=1233;
    cout<<"the value of a is: "<<a<<endl;//without setw
    cout<<"the value of b is: "<<b<<endl;//without setw
    cout<<"the value of c is: "<<c<<endl;//without setw
    
    cout<<"the value of a is: "<<setw(4)<<a<<endl;//with setw
    cout<<"the value of b is: "<<setw(4)<<b<<endl;//with setw
    cout<<"the value of c is: "<<setw(4)<<c<<endl;//with setw
    return 0;

}