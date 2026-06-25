class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string s: strs){
            encoded+=to_string(s.size())+'#';
            encoded+=s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while(i<(int)s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            res.push_back(s.substr(i,len));
            i+=len;
        }
        return res;
    }
};
