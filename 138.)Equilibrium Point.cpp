#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1)
           return 1;
        if(n==2)
           return -1;
       
       long long int sum=0,prev=0;
       for(int i=0;i<n;i++){
           sum=sum+a[i];
       }
       
       for(int i=1; i<n;i++){
           prev =prev+a[i-1];
           if((sum-a[i]-prev)==prev)
               return i+1;
       }
       
       return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
