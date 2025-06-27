#include<iostream>
using namespace std;

class addition{
    private: //ya hamro variable delcare garney,jun data input garnu xa teslai declare garne
    int a , b;
    public: //ya functions haru
    void getdata(){
        cout<<"Enter your number :"<<endl;
        cin>>a>>b;
    }
    void putdata(){
        cout<<"The sum is :"<<endl;
        cout<<a+b;
    }
};
int main(){
    addition aa; //aa use garyo vane hamro class use garna paixna vanya ho
    aa.getdata(); //aa ko getdata ma gayo
    aa.putdata();
    return 0;
}