impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut freq_s = HashMap::new();
        let mut freq_t = HashMap::new();

        for c_1 in s.chars() {
            *freq_s.entry(c_1).or_insert(0) += 1;
        }

        for c_2 in t.chars() {
            *freq_t.entry(c_2).or_insert(0) += 1;
        }

        let a = (freq_t == freq_s);
        a
    }
}
