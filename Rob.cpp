// 求極值問題可以先考慮動態規劃或是遞迴解

/*
明显的动态规划问题：从左到右抢劫，对于每间房子，其当前最大抢劫财物数为：到前前个房子的最大财物数+当前屋子财物数 or 到前一个屋的最大财物数，选取二者的最大值；也就是说要么抢当前屋子，要么不抢。
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        
        //
        
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        int pre = nums[0]; // 儲存到前前房屋和最大
        int cur = max(nums[0], nums[1]);  // 儲存到前房屋和最大
            
        for(int i=2; i<nums.size(); i++){
            int temp = cur ;
            cur = max(pre + nums[i], cur);
            pre = temp;
        }
        
        return cur;
    }
    
};