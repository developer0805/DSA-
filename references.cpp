#include<iostream>
using namespace std;
int main()
{
    int a= 10;
    int &r = a;
     
    //reference is just a another name to the same variable it does not occupy any memory 
    //used in parameter passing

    cout<<a<<endl<<r<<endl;
    r++;
    cout<<r<<endl;
    cout<<a<<endl;
}