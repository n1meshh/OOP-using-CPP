#include <iostream>
using namespace std;

int main() {
    int a = 0 , b=0,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    c=a+b;
    try{
        if(a<0 || b<0)
        throw runtime_error("Negative numbers are not allowed ");
        else{
            cout<<"The sum is "<<c;
        }

    }
    catch(const runtime_error& e){
        cout<<"Error: "<<e.what()<<endl;

    }
    return 0;
}