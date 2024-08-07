class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        unordered_map<int,int> mp;
        for(auto it : nums1){
            mp[it]++;
        }


        for(auto it : nums2){
            
            if(mp.count(it) > 0){
                ans.push_back(it);
                mp[it]--;
                if(mp[it] == 0) mp.erase(it);
            }
        }

        return ans;
    }
};