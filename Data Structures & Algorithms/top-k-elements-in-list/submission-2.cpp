class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>> p;
        for(auto& pair: mp){
            p.push_back({pair.second, pair.first});
        }
        sort(p.rbegin(), p.rend());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(p[i].second);
        }
        return res;
    }
};
