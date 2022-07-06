// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool solve(int a[],int n,int mid,int m){
    int sum=0;
    int st=1;
    for(int i=0;i<n;i++){
        if(a[i]>mid)
        return 0;
        if(sum+a[i]>mid){
            st++;
            sum=a[i];
            if(st>m)
            return 0;
        }else
        sum=sum+a[i];
    }
        
        return 1;
    }
    int findPages(int a[], int n, int m) 
    {
        //code here
        int lb=0,ans=0,s=0;
        for(int i=0;i<n;i++)
        s=s+a[i];
        int ub=s;
        while(lb<=ub){
            int mid=(ub+lb)/2;
            if(solve(a,n,mid,m)){
                ans=mid;
                ub=mid-1;
            }else
            lb=mid+1;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends
