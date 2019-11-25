# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


/*

    curSum 紀錄目前的總和
    若是curSum加下一個數字 < 下一個數字本身，直接取下一個數字作為起始
    若是之前的總和res > 剛計算出來的curSum（當下最大）則不更換最大總和

*/

int maxSubArray(vector<int>& nums) {
        int res = INT_MIN, curSum = 0;
        for(int i=0; i<nums.size(); i++){
            curSum = max(curSum+nums[i], nums[i]);
            res = max(curSum, res);
        }
        return res;
    }
int main() {
    
    while(1){

    }
        
    return 0;
    
};
