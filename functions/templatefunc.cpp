// #include <iostream>
// using namespace std;

// template <class T>//any type of data type lai support garxa 

// 🧠 1. What is a Template in C++?
// Templates allow writing generic code that works with any data type.

// 🔸 Why use templates?
// To avoid writing duplicate code for different data types.

// template <typename T>  // OR template <class T>
// T functionName(T a, T b) {
//     return a + b;
// }

//duplicate code lekhnu parena difff types of data type ko lago=o

//template function
#include <iostream>
using namespace std;

template <class T>
T add(T a , T b){
    return a+b;
}


int main() {
    cout <<  add<int>(3,4)<<endl;
    cout <<  add<float>(3.5,4.5)<<endl;

    return 0 ;
}

