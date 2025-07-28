#include <iostream>

using namespace std;

template <class T >

class base {
    private:
    T value;
    public:

    base(){

    }

    base (T a){
        value = a;
    }
    void display(){
        cout<<"data: "<<value;
    }
};
 class derived: public base <int>
 {
    public:
    derived(){
        
    }

    derived(int a):base<int>(a){

    }
 };

 int main(){
    derived d1(5);
    d1.display();
    return 0;
 }
