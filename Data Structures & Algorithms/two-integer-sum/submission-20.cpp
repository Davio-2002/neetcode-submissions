#include <ranges>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mp{};
        for(const auto [i, num] : std::ranges::views::enumerate(nums))
        {
            int complement = target - num;
            
            if(auto it = mp.find(complement); it != mp.end())
            {
                return {it->second, static_cast<int>(i)};
            }

            mp[num] = static_cast<int>(i);
        }
        return {};
    }
};