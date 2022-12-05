#include<iostream>
using namespace std;

typedef struct employee/*It is a choice to use typedef or not. It is just a shortcut. Its good to know.
                        struct is used to store info in different built-in data types.*/
{
    int eId;
    char favChar;
    float salary;
} ep;//when we use typedef, we have to use ep coz its a connective in a way.

union money{
    int rice;//4
    char car;//1
    float pounds;//4

};

int main(){
    union money m1;
    m1.rice = 15;
    m1.car = 'p';
    cout<<m1.car<<endl<<endl  ;
    ep harshit;/*if we don't use typedef then we don't get to use ep so instead of ep we have to 
                write whole "struct employee"*/
    ep uday;        
    ep himanshu;
    ep shaurya;
    harshit.eId = 1;
    harshit.favChar = 'p';
    harshit.salary = 120000000000;
    cout<<"the value is "<<harshit.eId<<endl;
    cout<<"the value is "<<harshit.favChar<<endl;
    cout<<"the value is "<<harshit.salary<<endl;

    return 0;
}