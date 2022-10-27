// You are using GCC
#include <iostream>
using namespace std;

class record{
  public:
    string a;
    int b;
    void getData(){
        cin>>a;
        cin>>b;
    }
    void putData(){
        cout<<"Name="<<a<<endl;
        cout<<"Age="<<b;
    }
    
    void compare(record &obj2){
        if(b>obj2.b){
            this->putData();
            
        }
        else{
            // return obj2;
            obj2.putData();
        }
    }
};

int main(){
    record ob1, ob2;
    ob1.getData();
    ob2.getData();
    ob1.compare(ob2);
    
    return 0;
}
