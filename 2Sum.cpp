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



// better approach
// TC: O(nlogn)
dont know
shraddha ne shayad wrong sikhaya haii



// optimal approach
// TC : O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector <int> vec;
        unordered_map <int , int> m;
        for(int i=0;i<n;i++) {
            int first = arr[i];
            int sec = target - first;
            if(m.find(sec) != m.end()) {
                vec.push_back(i);
                vec.push_back(m[sec]);
            }
            m[first]=i;
        }
        return vec;
    }
};
