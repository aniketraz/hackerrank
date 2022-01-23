#include <bits/stdc++.h>
using namespace std;
int main(){
    float p=0, q=0, r=0;
    int n;
    cin>>n;
    int arr[n];
    for (int i=1; i<=n; i++) {
        cin>>arr[i];
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            q++;
        }
        else {
        r++;
        }
    }
    cout<<fixed<<setprecision(6)<<p/n <<endl;
    cout<<fixed<<setprecision(6)<<q/n <<endl;
    cout<<fixed<<setprecision(6)<<r/n <<endl;
}
