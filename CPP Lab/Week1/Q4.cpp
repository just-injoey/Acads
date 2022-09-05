#include <iostream>
using namespace std;

int main(){
    int n, fact=1;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=n; i>=2; i--){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" = "<<fact;
    return 0;
}