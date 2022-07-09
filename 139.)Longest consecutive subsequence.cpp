

 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      unordered_map<int,bool>m;
      int mini=INT_MAX;
      int maxi=INT_MIN;
      for(int i=0;i<n;i++){
          mini=min(arr[i],mini);
          maxi=max(arr[i],maxi);
          m[arr[i]]=1;
      }
      int s=mini;
      int ans=1;
      for(int i=mini+1;i<=maxi;i++){
          if(m.find(i)!=m.end()){
              ans=max(ans,i-s+1);
          }else{
              s=i+1;
          }
      }
      return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
