// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.length()!=B.length())return -1;
        int count=0;
        map<char,int> mp;
        for(int i=0;i<A.length();i++){
            mp[A[i]]++;
        }
        for(int i=0;i<B.length();i++)mp[B[i]]--;
         for(auto i :mp)
         {
          if(i.second!=0)
           return -1;
         }
        int i=A.length()-1;
        int j=B.length()-1;
        while(i>=0 && j>=0){
            if(A[i]==B[j]){
                i--;
                j--;
            }
            else{
                i--;
            count++;
            }
        }
        return count;
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends