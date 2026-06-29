class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> numSet(nums.begin(),nums.end());
        int longest=0;
        for(auto it: numSet){
            auto prev=numSet.find(it-1);
            if(prev==numSet.end()){
                int len=1;
                while(numSet.count(it+len)){
                    len++;
                }
                longest=max(longest,len);
            }
            
        }
        return longest;
        
    }
};
