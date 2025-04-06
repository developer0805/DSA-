#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=11;
    arr[1]=15;
    arr[2]=45;
    cout<<"Size of array :"<<sizeof(arr)<<endl;
    cout<<arr[1]<<endl;
    cout<<"elements in integer array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];
        cout<<endl;
    }

    //character array
    char alpha[10] = {'a','b','c','d'};
    cout<<"Size of character array :"<<sizeof(alpha)<<endl;
    cout<<"First element in character array :"<<alpha[1]<<endl;
    cout<<"Elements in character array:"<<endl;
    for(int i=0;i<10;i++){
        cout<<alpha[i];
        cout<<endl;
    }

}