//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        // code here
        int n = arr.size();
        map<int,int>count;
        
        for(auto it : arr){
            count[it]++;
            
        }
        for(auto it : count){
            if(it.second != k){
                return it.first;
            }
        }
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