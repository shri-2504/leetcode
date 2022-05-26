// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a,char b){
        if((a==']' && b=='[')||(a=='}' && b=='{') || (a==')' && b=='('))return true;
        return false;
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(int i=0;i<x.length();i++){
            if(x[i]=='{' || x[i]=='[' || x[i]=='(')s.push(x[i]);
            else{
                if(s.empty())return false;
                else if(matching(x[i],s.top())==false)return false;
                else s.pop();
            }
        }
        //cout<<s.top()<<endl;
        if(s.empty())return true;
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends