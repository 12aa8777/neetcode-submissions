class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;

        for (int i = 0; i < nums.size(); i++) {
            int result = target - nums[i];

            if (n.count(result)) {
                return {n[result], i}; 
            }

            n[nums[i]] = i; 
        }

        return {}; 
    }
};

