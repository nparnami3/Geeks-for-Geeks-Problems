//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        
        
        for(int i=0; i<n; i++){
            int mid = start - ((start-end)/2);
            
            if(k == arr[mid]) return true;
            
            else if(k > arr[mid]){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
        return false;
        // Your code here
    }
};


//{ Driver Code Starts.

int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << (ob.searchInSorted(arr, k) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends