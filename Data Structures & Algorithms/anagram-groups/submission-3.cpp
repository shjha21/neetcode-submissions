class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> mp;
        for(string str: strs){
            vector<int>count(26);
            for(char c: str){
                count[int(c)-97]++;
            }
            string key=to_string(count[0]);
            for(int i=1;i<count.size();i++){
                key+="," + to_string(count[i]);
            }
            mp[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto &it: mp){
            res.push_back(it.second);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
