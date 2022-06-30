//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
           long long ans=0;
       int sign=str.length();
       char x=str[0];
       if(x==45){
           sign=str.length()-1;
       }
       reverse(str.begin(), str.end());
       for(int i=0;i<sign;i++){
           char ch=str[i];
           if(ch<48 || ch>57){
               return -1;
           }else{
               ans=ans +(ch-48)*pow(10,i);
           }
       }
       if(sign==str.length()){
           return ans;
       }else{
           return (-1)*ans;
       }
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
