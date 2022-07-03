#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &a)
    {
        // code here 
        int r=a.size();
        int c=a[0].size();
        queue<pair<int,int>>q;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==1)
            q.push({i,j});
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        int p=x,p1=y;
         q.pop();
        while(x<r){
            a[x][y]=1;
            x++;
        }
        x=p;
        while(x>=0){
            a[x][y]=1;
            x--;
        }
        x=p;
        while(y<c){
            a[x][y]=1;
            y++;
        }
        y=p1;
        while(y>=0){
            a[x][y]=1;
            y--;
        }
    }
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}


  // } Driver Code Ends
