class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne = 0;
        int current = 0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                current++;
            }else{
                if(current>maxOne){
                    maxOne = current;
                }
                current = 0;
            }
            
        }
        
        if(current>maxOne){
            maxOne = current;
        }
        return maxOne;
    }
    
};