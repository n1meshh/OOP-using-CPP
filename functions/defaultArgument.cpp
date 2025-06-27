//default arguement is a value provided in a function declaration that is automatically used if no value is passed for that parameter during the function call
//default parameters are provided right to left;

//simple interest using default parameters;

#include<iostream>
using namespace std;

float calculateSI (float p = 100 , float t = 2 , float r = 12){
    return (p*t*r)/100;
}


int main(){
    cout<<"The SI with default parameter is:"<<calculateSI()<<endl;
    cout<<"The SI with p = 200:"<<calculateSI(200);
}