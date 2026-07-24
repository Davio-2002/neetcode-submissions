class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (const auto& n : nums) {
            if (!seen.emplace(n).second) {
                return true;
            }
        }
        return false;
    }
};