// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int A[], int n) {
	    // code here
	     int l=0,r=n-1;
	    while(l<=r){
	        int m=l+(r-l)/2;
	        int next=(m+1)%n;
	        int prev=(m-1+n)%n;
	        if(A[m]<=A[prev] and A[m]<=A[next]) return m;
	        else if(A[m]>=A[0]) l=m+1;
	        else r=m-1;
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends