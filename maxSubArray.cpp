#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int maximum[20];
    int maxi=0;
    int k=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>=maxi)
        {
           maxi=sum;
        }
        else
        {
            sum=0;
        }

    }
    cout<<maxi;
}
