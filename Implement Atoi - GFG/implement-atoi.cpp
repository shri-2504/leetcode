// { Driver Code Starts
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
        int n=str.length();
        int result=0;
        int ans=0,count=0;
        int neg=1;
        for(int i=0;i<n;i++){
         if(i==0&& str[i]=='-'){neg=-1; continue;}
            result=str[i]-'0';
            if(result>=0 && result<=9){
                ans=ans*10+result;
                // count++;
            }
         else return -1;
        }
         return neg*ans;
       
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