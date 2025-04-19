//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        int n = arr.size();
        //insert the frequency
        for(auto it : arr ){
            mp[it]++;
        }
        
        //check the odd one out
        for(auto it : mp){
            if(it.second != k) return it.first;
        }
        //else
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the number of test cases
    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after k
        string inputLine;
        getline(cin, inputLine);
        stringstream ss(inputLine);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        cout << obj.findUnique(k, arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends