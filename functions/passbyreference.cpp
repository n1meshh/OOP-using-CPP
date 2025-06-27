//swap two numbers using pass by reference

#include<iostream>
using namespace std;

void swap(int*,int*);
 
 void swap(int *p,int*q){
    int temp;
    temp = *p;
    *p=*q;
    *q = temp;
 }

int main(){
    int a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    cout<<"Before swapping a = "<<a<<endl<<"b="<<b<<endl;
    swap(&a,&b);
    cout<<"After swapping a = "<<a;
    cout<<"b="<<b<<endl;

}
