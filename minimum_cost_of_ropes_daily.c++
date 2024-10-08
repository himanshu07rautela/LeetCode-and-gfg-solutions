//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        sort(arr,arr+n);
        // so sort the things, keep adding as per pair
        // 2,3,4,6-->4,5,6--->6,9:-5+9+15==29
        long long ans=0;
        priority_queue<long long, vector<long long>,greater<long long>> pq;
        // it helps always getting the minimum or mazimum element at the top
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        
        while(pq.size()>1){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long sum =a+b;
            pq.push(sum);
            ans+=sum;
        }
        return ans;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends