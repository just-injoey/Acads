#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int value;
    int weight;
    Item(int v,int w)
    {
        value=v;
        weight=w;
    }
};

bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double FractionalKnapsack(Item arr[],int n,int mweight)
{
    double profit=0.0;
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        if(mweight-arr[i].weight>=0)
        {
            profit+=arr[i].value;
            mweight-=arr[i].weight;
        }
        else
        {
            profit+=mweight*((double)arr[i].value/(double)arr[i].weight);
            return profit;
        }
    }
    return profit;

}
int main()
{
    Item arr[] = { { 100, 10 },
                   { 280, 40 },
                   { 120, 20 },
                   { 120, 24 } };
    int Mweight=60;
    int p = FractionalKnapsack(arr,sizeof(arr)/sizeof(Item),Mweight);
    cout<<"Maximum Profit is: "<<p;
    return 0;
}
