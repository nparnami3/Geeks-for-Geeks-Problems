class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int t) {
        // code here
        int n = arr.size();
    
        long long sum;
        for(int i=0; i<n; i++){
            
            //if the first element is the target
            if(arr[i] == t){
                return {i+1, i+1};
            }
            
            sum = arr[i];
            for(int j=i+1; j<n; j++){
               sum += arr[j];
                if(sum == t){
                   return {i+1, j+1};
                }
                
            }
        }
        return {-1}; //if no subarray is found
    }
};