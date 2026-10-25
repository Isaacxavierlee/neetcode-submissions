class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> charCount;

        if(s.length() && t.length()  == 0)
        {
            return false;
        }

        for(char c : s)
        {
            charCount[c]++;
        }

        for(char c : t)
        {
            charCount[c]--;
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
