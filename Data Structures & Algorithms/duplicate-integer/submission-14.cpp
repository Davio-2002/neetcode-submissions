class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> dupl;
        dupl.reserve(nums.size());
        for(const auto& num : nums)
        {
            if(dupl.count(num))
            {
                return true;
            }
            else
            {
                dupl.emplace(num);
            }
        }

        return false;
    }
};