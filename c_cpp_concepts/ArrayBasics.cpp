#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3};
    cout<<"Size of array :"<<sizeof(arr)<<endl;
    cout<<arr[1]<<endl;
    cout<<"elements in integer array :"<<endl;
    for(int i=0;i<5;i++){//use of for loop
        cout<<arr[i];
        cout<<endl;
    }

    //character array
    char alpha[10] = {'a','b','c','d'};
    cout<<"Size of character array :"<<sizeof(alpha)<<endl;
    cout<<"First element in character array :"<<alpha[1]<<endl;
    cout<<"Elements in character array:"<<endl;
    for(char x :alpha){ // used for each loop for accessing and displaying
        cout<<x; 
        cout<<endl;
    }

    //taking input from user
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    float *arr1= new float[n];
    cout<<"enter the elements in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"elements you entered:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i];
        cout<<endl;
    }
    delete [] arr1;
    return 0;


}