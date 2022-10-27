// You are using GCC
#include <iostream>
using namespace std;

class Parent{
    protected:
        int p_age;
    public:
        Parent(int n){
            p_age = n;
        }
        int getAge(){
            return p_age;
        }
};

class Child: public Parent{
    protected:
        int c_age;
    public:
        Child(int n, int m):Parent(n){
            c_age = m;  
        }
        int getAge(){
            return c_age;
        }
};


int main(){
    int num1, num2;
    Parent *bptr;
    
    cin>>num1>>num2;
    bptr = new Parent(num1);
    cout<<"bptr points to base object"<<endl;
    cout<<"b="<<bptr->getAge()<<endl;
    delete bptr;
    
    bptr = new Child(num1, num2);
    cout<<"bptr now points to derived object"<<endl;
    cout<<"b="<<((Child*)bptr)->getAge()<<endl;
    delete bptr;
    
    return 0;
}

