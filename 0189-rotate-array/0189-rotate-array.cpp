class Solution {
public:
    
    // void reverse(vector<int>& arr,int start,int end){
    //     while(start<end){
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;
    //         start++;
    //         end--;
    //     }
    // }
    void rotate(vector<int>& nums, int k) {
       k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};