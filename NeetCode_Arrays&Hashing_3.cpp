//NeatCode 150 problem 1.3
//Problem 3: Two Sum

class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> map;
       
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if (map.count(comp)) {
                return {i, map[comp]};
            }
            map[nums[i]] = i;
        
    }return {};

}};
