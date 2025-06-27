//square of a number enterd by the user using functions

#include <iostream>

using namespace std;

int square(int);

int square(int a){
    return a*a;
}

int main(){
    int n,sqr;
    cout<<"Enter a number to square it:"<<endl;
    cin>>n;
    sqr = square(n);
    cout<<"The square of n is :"<<sqr;
    return 0;

}