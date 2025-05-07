//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int lar = arr[0];
        int sec_lar = -1;
        
        for(int i=0; i<n; i++){
            if(arr[i] > lar){
                sec_lar = lar;
                lar = arr[i];
            }
            if(arr[i] > sec_lar && arr[i] < lar){
                sec_lar = arr[i];
            }
        }
        return sec_lar;
    }
};


//{ Driver Code Starts.

int main() {
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends