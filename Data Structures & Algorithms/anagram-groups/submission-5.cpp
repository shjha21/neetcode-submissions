class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        for(string str: strs){
            vector<int> cnt(26,0);
            for(char c: str){
                cnt[c-'a']++;
            }
            string key=to_string(cnt[0]);
            for(int i=1;i<26;i++){
                key+=','+to_string(cnt[i]);
            }
            mp[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto &pair: mp){
            res.push_back(pair.second);
        }
        return res;
    }
};
