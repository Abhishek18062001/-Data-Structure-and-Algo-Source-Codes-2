#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
           int x=a.size();
    int y=b.size();
    //cout<<x<<" "<<y<<endl;
    if(x!=y){
        return 0;
    }
    int p[26]={0};
    for(int i=0;i<x;i++){
        int c=a[i]-'a';
        p[c]++;
        int d=b[i]-'a';
        p[d]--;
    }
    for(int i=0;i<26;i++){
    //    cout<<p[i]<<" ";
        
    }
 //   cout<<endl;

    for(int i=0;i<26;i++){
        if(p[i]!=0)
        return 0;
    }
    return 1;
    
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends
