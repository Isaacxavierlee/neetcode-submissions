class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charCount;
        
        if(s.size() !=  t.size())
        {
            return false;
        }

        for(int i = 0; i < s.size(); i++)
        {
            charCount[s[i]]++;
            charCount[t[i]]--;
        }

        for(auto entry : charCount)
        {
            if(entry.second != 0)
            {
                return false;
            }
        }   
    return true;
        
    }
};
