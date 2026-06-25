class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int diff=0;
        vector <int> res;
        for(int i=0;i<n;i++){
            diff=target-nums[i];
            if(mp.contains(diff)) {
                res.push_back(mp.find(diff)->second);
                res.push_back(i);
                break;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
