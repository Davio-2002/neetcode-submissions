class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        seen.reserve(nums.size());
        for(const auto& num : nums)
        {
            if(seen.count(num))
            {
                return true;
            }
            else
            {
                seen.emplace(num);
            }
        }

        return false;
    }
};