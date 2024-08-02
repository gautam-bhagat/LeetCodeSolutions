class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueElements;
        for ( int num : nums) {
            uniqueElements.insert(num);
        }
        
        nums.assign(uniqueElements.begin(), uniqueElements.end());
        
        return uniqueElements.size();
    }
};