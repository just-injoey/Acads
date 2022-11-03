// You are using GCC
#include <iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout<<"Display Base"<<endl;
        }
        virtual void show(){
            cout<<" Show Base:"<<endl;
        }
};

class Derived:public Base{
    public: 
        void display(){
            cout<<"Display Base"<<endl;
        }
        void show(){
            cout<<" Show Derived"<<endl;
        }
};

int main(){
    Base b1;
    Base *bptr = &b1;
    cout<<"bptr points to Base"<<endl;
    bptr->display();
    bptr->show();
    
    Derived d1;
    bptr = &d1;
    cout<<" bptr points to derived"<<endl;
    bptr->display();
    bptr->show();
    
    
    return 0;
}
