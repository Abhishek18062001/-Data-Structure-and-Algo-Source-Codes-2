//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
       priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++){
            pq.push({arr[i],i});
        }
        int i=1,j=k;
        vector<int>result;
        result.push_back(pq.top().first);
        
        while(j<n){
            pq.push({arr[j],j});
            pair<int,int> temp = pq.top();
            if(temp.second >= i && temp.second <= j){
                result.push_back(temp.first);  
            }
            else{
                while(j<n){
                    temp=pq.top();
                    if(temp.second>=i&&temp.second<=j){
                        break;
                    }
                    else{
                        pq.pop();
                    }
                }
                result.push_back(temp.first);
            }
            i++;
            j++;
            
        }
        
        return result;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
