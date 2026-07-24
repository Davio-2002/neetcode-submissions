class Solution {
   public:
    std::unordered_map<char, int> freq_s{};
    std::unordered_map<char, int> freq_t{};

    bool isAnagram(string s, string t) {
        for(const auto& c_1 : s )
        {
            freq_s[c_1]++;
        }

        for(const auto& c_2 : t )
        {
            freq_t[c_2]++;
        }

        return freq_s == freq_t;
    }
};
