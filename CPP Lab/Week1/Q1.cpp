#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    char op;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Enter the operator: ";
    cin>>op;

    switch(op){
        case '+': cout<<num1<<op<<num2<<" = "<<num1+num2<<endl;
        break;

        case '-': cout<<num1<<op<<num2<<" = "<<num1-num2<<endl;
        break;

        case '*': cout<<num1<<op<<num2<<" = "<<num1*num2<<endl;
        break;

        case '/': cout<<num1<<op<<num2<<" = "<<float(num1)/float(num2)<<endl;
        break;

        case '%': cout<<num1<<op<<num2<<" = "<<num1%num2<<endl;
        break;

        default: cout<<"Invalid Operator"<<endl;
    }
    return 0;
}
