#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, lsum=0, rsum=0;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        if(i == j){
            lsum = lsum + arr[i][j];
        }
    }
    }
    
    for(int i=0; i<n; i++){
        for(int j=n-1-i; j>=0;){
            rsum = rsum + arr[i][j];
            break;
        }
    }
    cout<<abs(lsum - rsum)<<endl;
    return 0;
}
