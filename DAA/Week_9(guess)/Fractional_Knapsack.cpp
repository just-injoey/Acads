#include<cstdio>

#include<iostream>

using namespace std;

void bubblesort(int arrofweight[],int arrofvalue[],int arrofratio[],int arrofindex[],int size)

{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arrofratio[j]>arrofratio[j+1])
            {
                flag=1;
                int temp=arrofratio[j];
                arrofratio[j]=arrofratio[j+1];
                arrofratio[j+1]=temp;
                int temp1=arrofweight[j];
                arrofweight[j]=arrofweight[j+1];
                arrofweight[j+1]=temp1;
                int temp2=arrofvalue[j];
                arrofvalue[j]=arrofvalue[j+1];
                arrofvalue[j+1]=temp2;
                int temp3=arrofindex[j];
                arrofindex[j]=arrofindex[j+1];
                arrofindex[j+1]=temp3;
            }
            if(flag==0)
            {
                break;
            }
        }
    }
}
int main()
{
    int knapsack_size,numofitems;
    float knapsack_value;
    cout<<"Enter the capacity of knapsack:"<<endl;
    cin>>knapsack_size;
    cout<<"Enter the number of items:"<<endl;
    cin>>numofitems;
    int arrofweight[numofitems];
    int arrofvalue[numofitems];
    int arrofratio[numofitems];
    int arrofindex[numofitems];
    cout<<"Enter the weight and value of 3 item:"<<endl;
    for(int i=0;i<numofitems;i++)
    {
        cin>>arrofweight[i];
        cin>>arrofvalue[i];
        arrofindex[i]=i;
    }
    for(int i=0;i<numofitems;i++)
    {
        arrofratio[i]=arrofvalue[i]/arrofweight[i];
    }
    bubblesort(arrofweight,arrofvalue,arrofratio,arrofindex,numofitems);
    int i=numofitems-1;
    while(knapsack_size>arrofweight[i])
    {
        knapsack_value+=arrofvalue[i];
        knapsack_size-=arrofweight[i];
        cout<<arrofindex[i]+1<<" "<<arrofvalue[i]<<" "<<arrofweight[i]<<" "<<knapsack_size<<"."<<endl;
        i=i-1;
    }
    if(knapsack_size>0)
    {
        knapsack_value+=(arrofratio[i]*knapsack_size);
        int percentage=(int)(knapsack_size*100/arrofweight[i]);
        cout<<percentage<<"% "<<arrofvalue[i]<<" "<<arrofweight[i]<<" "<<arrofindex[i]+1<<" "<<endl;
    }
    cout<<"Filled the bag with objects worth ";
    printf("%.2f Rs. ", knapsack_value);
}
