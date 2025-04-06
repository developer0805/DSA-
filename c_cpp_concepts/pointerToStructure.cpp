#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    //static alloaction
    Rectangle r={10,5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    Rectangle *p=&r;
    p->length=40;
    p->breadth=50;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    //Dynamic allocation using heap
    
    Rectangle *p1 = new Rectangle;
    p1->length=70;
    p1->breadth=80;
    cout<<p1->length<<endl;
    cout<<p1->breadth<<endl;
    delete p1;
    return 0;

}