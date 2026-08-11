impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut mp = HashMap::<i32, i32>::new();
        for (i, &item) in nums.iter().enumerate() {
            let complement = target - item;
            
            if let Some(&index) = mp.get(&complement) {
                return vec![index as i32, i as i32];
            }

            mp.insert(item as i32, i as i32);
        }

        vec![]
    }
}
