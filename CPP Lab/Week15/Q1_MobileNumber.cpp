#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
    string mobile;
    cin>>mobile;
    cout<<mobile<<"\n";
    try {
        if(mobile.size()<10) {
            throw(mobile);
        }
        else {
            cout<<"The entered mobile number is valid";
        }
    }
    catch(string s) {
        cout<<"The mobile number should have 10 digits";
    }
}
