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

        for(auto entry : t)
        {
            charCount[entry]--;
        }

        for(auto entry: charCount)
        {
            if(entry.second != 0)
            {
                return false;
            }
        }

        
        return true;
    }
};
