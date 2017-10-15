#include<iostream>
using namespace std;
int maximum(int ,int );
int knapsack(int nbrOfElements,int weightAllowed,int *value,int *weight)
{
    int item,currWeight=0;
    int optimumTable[nbrOfElements+1][weightAllowed+1];
    for(int item=0;item<=nbrOfElements;item++)
    {
        for(int currWeight=0;currWeight<=weightAllowed;currWeight++)
        {
            if(item==0 || currWeight==0)
            {
                optimumTable[item][currWeight]=0;
            }
            else if(weight[item-1]>currWeight )
            {  optimumTable[item][currWeight]=optimumTable[item-1][currWeight];

            }
                else
            {
                optimumTable[item][currWeight]= maximum(value[item-1] +optimumTable[item-1][currWeight-weight[item-1]],optimumTable[item-1][currWeight]);
            }


        }
    }
    /*for(int item=0;item<=nbrOfElements;item++)
    {
        for(int currWeight=0;currWeight<=weightAllowed;currWeight++)
        {
           cout<< optimumTable[item][currWeight]<<" ";
        }
        cout<<"\n";
    }*/
    return optimumTable[nbrOfElements][weightAllowed];
}
int maximum(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int nbrOfElements=3;
    int weightAllowed=5;
    int value[]={40,100,20};
    int weight[]={3,2,1};
    int totalValue=knapsack(nbrOfElements,weightAllowed,value,weight);
    cout<<totalValue<<" ";
}

