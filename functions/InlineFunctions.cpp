//INLINE FUNCTIONS:
//An inline functions Is a function where the compiler replaces the function call with the actual function code (during compilation)

//Question1:
// simple interest for different principle but same time and rate;


#include <iostream>
using namespace std;

float calcuSI(float,float,float);

inline float calcuSI(float p , float t , float r){
    return (p*t*r)/100;
}

int main(){
    float  t=2, r=12;
    cout<<"P"<<"\t"<<"T"<<"\t"<<"SI"<<endl;
    cout<<"---------------------"<<endl;
    for (float p = 100; p<=500;p=p+100){
        cout<<p<<"\t"<<t<<"\t"<<calcuSI(p,t,r)<<endl;
    }
    return 0;
   
}

