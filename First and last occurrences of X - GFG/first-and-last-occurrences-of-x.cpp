// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
         vector<int> ans;
        int l=0,r=arr.size()-1;
        int x1=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==x)
            {  x1=mid;
                r=mid-1;
                
            }
            else if(arr[mid]>x)
            {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        l=0,r=arr.size()-1;
        int y1=-1;
         while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==x)
            {  y1=mid;
               l=mid+1;
                
            }
            else if(arr[mid]>x)
            {
                r=mid-1;
            }
            else
                l=mid+1;
        }
        ans.push_back(x1);
        ans.push_back(y1);
        if(x1==-1)return {-1};
       
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends