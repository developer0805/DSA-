#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<"accessing value of a using pointer : "<<*p<<endl;
    cout<<"Address of variable a : "<<p<<endl;

    //pointer to an array
    int arr[4]={2,3,4,5};

    int *p1;
    p1=arr;//pointer to array p1=arr is same as p1 = &arr[0]

    cout<<"array elements:"<<endl;
    for(int i=0;i<4;i++){
        cout<<p1[i];//accessing array elements using pointers
        cout<<endl;
    }

}