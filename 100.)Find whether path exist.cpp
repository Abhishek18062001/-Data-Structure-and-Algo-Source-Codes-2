#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    bool solve(vector<vector<int>>& grid, int i, int j) {
        // Base Case
        
        int n = grid.size();
        int m = grid[0].size();
        if(i < 0 or j < 0 or i >= n or j >= m) {
            return 0;
        }
        
        if(grid[i][j] == 2) {
            return 1;
        }
        
        if(grid[i][j] == 0  or grid[i][j] == -1) {
            return 0;
        }
        
        int curr = grid[i][j];
        grid[i][j] = -1;
        int left = solve(grid, i+1, j);
        int up=solve(grid, i, j+1);
        int right = solve(grid, i-1, j);
        int down= solve(grid, i, j-1);
        grid[i][j] = curr;
        return left||right||up||down;
        
    }
    bool is_Possible(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    if(solve(grid, i, j)) {
                        return 1;
                    }
                }
            }
        }
        
        return 0;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends
