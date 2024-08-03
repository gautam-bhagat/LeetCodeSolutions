class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int> pre;
        int curr =0; 
        pre[curr]++;
        for(int i =0;i<n;i++){
            curr+=nums[i];
            int diff = curr- k;
            if(pre.count(diff)>0){
                ans+=pre[diff];
            }
            pre[curr]++;
        }
        return ans;
    }  
};