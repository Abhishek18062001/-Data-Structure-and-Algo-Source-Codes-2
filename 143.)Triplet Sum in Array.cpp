#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int x)
    {
        //Your Code Here
         sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int s=x-a[i];
        int low=i+1,high=n-1;
        while(low<high){
            if(a[low]+a[high]==s)
            return 1;
            else if((a[low]+a[high])>s)
            high--;
            else
            low++;
        }
    }
    return 0;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
