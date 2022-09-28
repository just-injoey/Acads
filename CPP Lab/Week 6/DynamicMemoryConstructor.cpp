// WAP to allocate memory dynamically for an object of a given class using classes constructor

#include <iostream>
using namespace std;

class demo {
	int* p;
    public:
        demo(){
            p = new int;
            *p = 0;
        }
        demo(int x){
            p = new int;
            *p = x;
        }
        void display(){
            cout << *p << endl;
        }
};

int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;
    demo obj1;
	demo obj2(num);
    cout<<"Data in objects: "<<endl;
    obj1.display();
	obj2.display();
}
