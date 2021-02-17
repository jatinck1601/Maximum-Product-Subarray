#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long ans,maxp,minp;
	    ans=maxp=minp=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)
                swap(maxp,minp);
            maxp =max<long long int>(maxp*arr[i],arr[i]);
            minp =min<long long int>(minp*arr[i],arr[i]);
            ans = max(ans,maxp);
        }
        return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
