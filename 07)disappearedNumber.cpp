vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        set <int> s(arr.begin() , arr.end());

        for(int i=1;i<=n;i++) {
            if(s.find(i) == s.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
