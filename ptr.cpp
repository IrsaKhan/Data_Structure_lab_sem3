#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char a ;
    a = 'a';
    char *pt;
    pt = &a;

   
    cout<<(void*)pt<<endl; // type casting
    cout<<&pt<<endl;
    cout<<*pt<<endl;

    cout<<"the memory address of a is:"<<(void*)&a<<endl; //type casting, because thinks of char as c string. type casting???? only in case of character conversion

    int *ptr ;
    int i = 0;

    ptr = &i;

    int **ptr2 = &ptr;

    int ***ptr3 = &ptr2;
    cout<<ptr<<" "<<ptr2<<" " << ptr3;




}