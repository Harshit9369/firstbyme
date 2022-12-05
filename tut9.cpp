#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;
    cout<<"the address of a is "<<b<<endl;//pointers in cpp
    int** c = &b;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the address of c is "<<&c;
    return 0;
}