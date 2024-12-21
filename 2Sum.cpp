//brute force appproach
// TC : O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector <int> vec;
        for(int i=0;i<n;i++) {
for(int j=i+1 ;j<n;j++) {
    if(target == arr[i] + arr[j]) {
vec.push_back(i);
vec.push_back(j);

    }
}
        }
        return vec;
    }
};
