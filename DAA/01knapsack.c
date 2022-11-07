#include<stdio.h>

int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int kS(int cap,int weight[],int p[], int n){
    if(n==0||cap==0){
        return 0;
    }
    if(weight[n-1]>cap){
        return kS(cap,weight,p,n-1);
    }
    else{
        return max(p[n-1]+kS(cap-weight[n-1],weight,p,n-1),kS(cap,weight,p,n-1));
    }
}

int main(){
    int n;
    scanf("%d",&n);

    int p[n],weight[n],cap;
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&p[i],&weight[i]);
    }
    
    scanf("%d",&cap);
    
    printf("%d",kS(cap,weight,p,n));
    
    return 0;
}
