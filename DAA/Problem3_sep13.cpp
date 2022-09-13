#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    
    int grp[n], jet[m];
    
    for(int i=0; i<n; i++){
        cin>>grp[i];
    }
    for(int i=0; i<m; i++){
        cin>>jet[i];
    }
    
    cout<<(n/m)+2*(n-m);
}






