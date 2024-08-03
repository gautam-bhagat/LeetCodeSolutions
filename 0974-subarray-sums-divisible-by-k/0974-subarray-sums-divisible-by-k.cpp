class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int> rem;
        rem[0]++;
        int curr=0;
        for(int i=0;i<n;i++){
           curr+=nums[i];
        int c_rem = curr%k;
            if(c_rem < 0) {
                c_rem += k;
            }
            if(rem.find(c_rem)!=rem.end()){
                ans+=rem[c_rem];
            }
            
            rem[c_rem]++;
        }
        return ans;
    }
};