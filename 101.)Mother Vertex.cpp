#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    void dfs(vector<int>adj[], vector<int>&vis, int &count, int i){
        vis[i]=1;
        count++;
        for(int j:adj[i]){
            if(vis[j]==0)
             dfs(adj,vis,count,j);
        }
    }
	int findMotherVertex(int v, vector<int>adj[])
	{
	    // Code here
	    for(int i=0;i<v;i++){
	        vector<int>vis(v,0);
	        int count=0;
	        dfs(adj,vis,count,i);
	     //   cout<<count<<" ";
	        if(count==v)
	        return i;
	    }
	    return -1;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
