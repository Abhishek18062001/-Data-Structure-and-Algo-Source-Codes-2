

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int currmaxi=0,maxi=arr[0],currmini=0,mini=arr[0],total=0;
        for(int i=0;i<n;i++){
            currmaxi=max(currmaxi+arr[i],arr[i]);
            maxi=max(currmaxi,maxi);
            currmini=min(arr[i],currmini+arr[i]);
            mini=min(mini,currmini);
            total=total+arr[i];
            
        }
        if(maxi>0){
            return max(maxi,total-mini);
        }else
        return maxi;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
