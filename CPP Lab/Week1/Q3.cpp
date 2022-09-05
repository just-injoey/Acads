#include <iostream>
using namespace std;

int main(){
    int n, x;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to be searched: ";
    cin>>x;
    for(int i=0; i<n; i++){
        if(x==arr[i]){
            cout<<"Element "<<x<<" Found at index "<<i<<endl; 
        }
    }
    return 0;
}