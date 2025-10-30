#include <bits/stdc++.h>
using namespace std ; 
//User function Template for python3
class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int count = 0 ;
        for(int i = 1 ; i*i <= n ; i++){
            
            if(n % i == 0){
                count += 2 ;
            }
            
            else if(i*i % n == 0){
                count += 1  ;
            }
        }
        if(count == 2){
            return 1 ;
        }
        else{
          return 0 ;  
        }  
    }
};
int main(){
    int t ;
    cin >> t ; 
    while(t--){
        int N ;
        cin >> N ;
        Solution ob ; 
        cout << (ob.isPrime(N) ? "true" : "false") << endl ; 
        
        cout << "~" 
            << "\n" ; 
    }
    return 0;
}
            
