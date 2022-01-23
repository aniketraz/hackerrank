#include <iostream>

using namespace std;

int main() {
    
    int n, m = 0, k, x;
    
    cin >> n;
    
    for( int i=0; i<n; i++ ) {
        cin >> x;
        
        if( x > m) {
            m= x; 
            k = 1;
        }
        else if( x == m)
            k=k+1;
    }
    
    cout << k;
    
    
    return 0;
}
