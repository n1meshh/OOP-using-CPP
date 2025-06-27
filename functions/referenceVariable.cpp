//reference variable eaxample

//reference variable are the speical variables which provides an alternative name fo previously defined variable;

#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int &b = a;
    cout<<"the value of a is:"<<b;
    return 0;
}