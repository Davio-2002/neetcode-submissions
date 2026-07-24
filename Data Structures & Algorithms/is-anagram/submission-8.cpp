class Solution {
   public:
    std::unordered_map<char, int> freq_s{};
    std::unordered_map<char, int> freq_t{};

    static std::unordered_map<char, int> check_frequency( std::unordered_map<char, int>& mp, 
                                                         const std::string& s)
    {
        for(auto& c : s)
        {
            mp[c]++;
        }         

        return mp;
    }

    bool isAnagram(string s, string t) {
        return check_frequency(freq_s, s) == check_frequency(freq_t, t);
    }
};
