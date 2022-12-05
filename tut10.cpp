#include<iostream>
using namespace std;

int main(){
    int marks[]={45, 47, 49, 9};//first and most basic program of arrays
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // int* p = marks;
    // cout<<*p<<endl;
    // cout<<*(++p)<<endl<<endl;

    int i = 0;
    while(i < 4);
    {
        cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
        i++;
    }

    return 0;
}