//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int oddAndEven(string S) {
        // code here
       int oddsum = 0;
       int evensum = 0;
       
       for(int i=0; i<S.length(); i++){
           
           int digit = S[i] - '0'; // char to int
           if((i+1)%2 == 0){
               evensum += digit;
           }
           else{
               oddsum += digit;
           }
       }
       return (oddsum == evensum)?1:0;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddAndEven(S) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends