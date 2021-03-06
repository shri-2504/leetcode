// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        //code here
        int temp[N];
        vector<int> ans;
        temp[N-1]=Arr[N-1];
        for(int i=N-2;i>=0;i--){
            temp[i]=min(Arr[i],temp[i+1]);
        }
        for(int i=0;i<N;i++){
            int low=i+1,high=N-1,ind=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(temp[mid]<Arr[i]){
                    ind=mid;
                    low=mid+1;
                }
                else high=mid-1;
            }
            ans.push_back(ind);
        }
        return ans;
    }
};

// { Driver Code Starts.
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++)
            cin>>Arr[i];
        Solution obj;
        vector<int> answer=obj.farNumber(N,Arr);
        for(auto i:answer)
            cout<<i<<" ";
        cout<<endl;
  }
}  // } Driver Code Ends