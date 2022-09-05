#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
    int rootn = pow(n,0.5);
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Prime number from 1 to "<<n<<" are,"<<endl;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}

