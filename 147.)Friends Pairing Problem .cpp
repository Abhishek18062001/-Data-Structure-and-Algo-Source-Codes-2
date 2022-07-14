#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        // code here
       long long int dp[n+1];
         dp[0] = 1;
       long mod = 1000000007;
       
       for(int i=1;i<n+1;i++){
           if(i==1) dp[i] = 1;
           else{
               dp[i] = (dp[i-1] + ((i-1)*dp[i-2])%mod)%mod;
           }
       }
       
       return dp[n]%mod;
    }
};    
 

// { Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends
