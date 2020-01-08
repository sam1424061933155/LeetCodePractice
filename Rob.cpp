// 求極值問題可以先考慮動態規劃或是遞迴解

class Solution {
public:
    int rob(vector<int>& nums) {
        
        //
        
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        int pre = nums[0]; // 上一個未盜的
        int cur = max(nums[0], nums[1]);  // 儲存到目前為主和最大
            
        for(int i=2; i<nums.size(); i++){
            int temp = cur ;
            cur = max(pre + nums[i], cur);
            pre = temp;
        }
        
        return cur;
    }
    
};