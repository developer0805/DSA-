#include<iostream>
using namespace std;

struct Rectangle{//structure defination
    int length;
    int breadth;
    char x;
};//r1,r2(another method to declare variable);
//struct Rectangle r (another way of declaration)

int main(){
    struct Rectangle r;//declaring a variable of type structure

    //struct Rectangle r = {10,20} (another way of initialization)
    r.length=28;//dot operator is used for accessing members
    r.breadth=30;//initialization

    cout<<"Area of Rectangle : "<<r.length*r.breadth<<endl;

    cout<<"Size of structure : "<<sizeof(r);//size of struct depends upons data types it includes
    /*here char is of 1 byte so actual memory size is 9 byte but it will allocate 3 byte of memoryextra for char which process
    is called padding so that it will be easy for processor to read entire structure once later on it will discard last 3 bytes*/
    
    return 0;
}