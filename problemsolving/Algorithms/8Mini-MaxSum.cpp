#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
        ll n=5;
        ll sum=0 ,sum2=0;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
                cin>>arr[i];
        }
        for(int i=0; i<(n-1); i++)
        {
                for(int j=0; j<(n-i-1); j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        for(int i=0; i<n-1; i++){
            sum=sum+arr[i];
        }
        cout<<sum<<" ";
        for(int i=n-1; i>0; i--){
            sum2=sum2+arr[i];
        }
        cout<<sum2;
}
