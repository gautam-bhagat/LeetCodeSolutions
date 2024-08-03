class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int diff = 0;
        unordered_map<int,int> dict;
        for(int i=0;i<nums.size();i++){
            diff = target - nums[i];
            if(dict.count(diff)>0){
                return {dict[diff],i};
            }else{
                dict[nums[i]] = i;
            }
            
        }
        return {};
    }
};