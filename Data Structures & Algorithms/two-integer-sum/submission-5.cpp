class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> pairs;
        int complement = 0;
        for (int i = 0; i < nums.size(); ++i) {
            complement = target - nums[i];
            if (pairs.count(complement)) {
                return {pairs[complement], i};
            }
            pairs.insert({nums[i], i});
        }
        return {};  
    }
};
