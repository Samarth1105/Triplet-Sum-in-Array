class Solution {
  public:
    bool find3Numbers(int arr[], int n, int x) {
        for (int i=0;i<n-2;i++){
            unordered_set<int>m;
            
            int currSum = x-arr[i];
            
            for(int j=i+1;j<n;j++){
                int reqSum = currSum - arr[j];
                
                if(m.find(reqSum) != m.end()){
                    return true;
                }
                m.insert(arr[j]);
            }
        }
        return false;
    }
};
