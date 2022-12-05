#include<iostream>
using namespace std;

int main(){
    typedef struct employee
    {
        /* data */
        int salary;
        char favChar;
        float pounds;
    }ep;

    ep harry;
    ep rohandas;
    ep shubham;
    harry.salary=120000000;
    harry.favChar='c';
    harry.pounds=194;
    cout<<"harry is overweight coz his weight is: "<<harry.pounds<<endl;
    cout<<"harry is rich coz his salary is: "<<harry.salary<<endl;
    cout<<"harry is clever coz his favorite character is: "<<harry.favChar<<endl;

    return 0;
}