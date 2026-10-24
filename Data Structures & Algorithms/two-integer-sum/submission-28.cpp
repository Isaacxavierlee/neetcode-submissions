class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> numMaps;

        for(int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if(numMaps.find(complement) != numMaps.end())
            {
                return {numMaps[complement],i};
            }

        numMaps[nums[i]] = i;
        }
return {};        
    }
};
