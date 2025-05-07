//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int firstElementKTime(vector<int>& arr, int k) {
        // write code
        int n = arr.size();
        map<int, int>count;
        for(auto num : arr){
            //insert into map
            count[num]++;
            
            //check the frequency
            if(count[num] == k){
                return num;
            }
            
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.firstElementKTime(arr, k);
        cout << res << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends