class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> charCount;

        if(s.length() != t.length())
        {
            return false;
        }

        for(auto entry : s)
        {
            charCount[entry]++;
        }

        for(auto x : t)
        {
            charCount[x]--;
        }

        for(auto z : charCount)
        {
            if(z.second != 0)
            {
                return false;
            }
        }
    return true;
        
    }
};
