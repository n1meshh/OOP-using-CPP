//array is the  grouping of similar types of variables with a common tag is known as array.
//declaration of array = int a[10];

//question no:1

//wap to calculate the sum and average of n integer numbers entered by the user using the concept of array;

// #include <iostream>
// using namespace std;

// int main() {
//     int n,i;
//     float a[10],
//      sum = 0,avg; 



//     cout<<"Enter the n number:";
//     cin>>n;

//     cout<<"Start entering the values..."<<endl;
//     for(i=0;i<n;i++){
//         cin>>a[i];
//         sum = sum + a[i];
//     }
//     avg = sum/n;
//     cout<<"Sum :"<<sum<<endl;
//     cout<<"avg :"<<avg<<endl;

//     return 0;
// }



//enum:

#include<iostream>
using namespace std;

enum day {sun,mon,tue,wed,thu,fri,sat};//0,1,2,3,4,5,6

int main(){
    enum day d;
    d = wed;
    cout<<"the day no. of wed is :"<<d<<endl;
    cout<<"the day no. of wed is :"<<wed<<endl;
}
