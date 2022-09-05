#include <iostream>
using namespace std;

class test{
    int objno;
    static int objcnt;
    public:
        test(){
            objno = ++objcnt;
        }
        ~test(){
            --objcnt;
        }
        void printObjectNumber(){
            cout<<"Object Number: "<<objno<<endl;
        }
        static void printObjectCount(){
            cout<<"ObjectCount: "<<objcnt<<endl;
        }
};

int test::objcnt;

int main(){
    test t1, t2;
    test::printObjectCount();
    test t3;
    test::printObjectCount();
    t1.printObjectNumber();
    t2.printObjectNumber();
    t3.printObjectNumber();
    return 0;
}



