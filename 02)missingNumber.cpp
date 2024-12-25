//optimal approach
TC : O(n)
class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int actualSum=0;
        int expSum=0;
        int ans = 0;
        for(int i=0;i<n;i++) {
            actualSum = actualSum + arr[i];
        }

        for(int j=0;j<=n;j++) {
            expSum = expSum + j;
        }
         ans = expSum - actualSum;
        return ans;
    }
};
