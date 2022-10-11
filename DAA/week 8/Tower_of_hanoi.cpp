
#include<iostream>
using namespace std;
void tow_of_hanoi(int n,char x,char y,char z) {
   if(n>0) {
      tow_of_hanoi(n-1,x,z,y);
      cout<<" Move disk from "<<x<<" to "<<y<<endl;
      tow_of_hanoi(n-1,z,y,x);
   }
}
int main() {
   int n;
   cin>>n;
   cout<<"TOH solution steps:"<<endl<<endl;
   tow_of_hanoi(n,'S','A','D');
}
