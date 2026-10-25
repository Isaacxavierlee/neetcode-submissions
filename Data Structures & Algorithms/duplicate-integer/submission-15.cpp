class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for(auto entry : nums)
        {
            if(seen.find(entry)!=seen.end())
            {
                return true;
            }
        seen.insert(entry);
        }
    return false;
    }
};