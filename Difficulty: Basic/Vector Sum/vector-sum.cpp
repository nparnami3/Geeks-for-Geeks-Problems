//{ Driver Code Starts
// Initial Template for C++

// Find sum of the vector
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete the function
int sumMe(vector<int> arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
    // Your code here
    // Use accumulate function
}



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << sumMe(arr, n) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends