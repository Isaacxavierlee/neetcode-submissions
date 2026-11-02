class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> charCount;


        if(s.length() != t.length())
        {
            return false;
        }

for(auto character : s)
{
    charCount[character]++;
}

for(auto character : t)
{
    charCount[character]--;
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
