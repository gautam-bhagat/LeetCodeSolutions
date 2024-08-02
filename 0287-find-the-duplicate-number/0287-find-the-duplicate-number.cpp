class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int, int> countMap;
        for (int num : nums) {
            if (countMap[num] > 0) {
                return num;
            }
            countMap[num]++;
        }
        return -1; 
    }
};