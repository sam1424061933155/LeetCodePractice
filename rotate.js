/* 
如果使用 temp = nums ， temp 和 nums 會指向同一個物件，當更改 nums 時同樣也會更改到 temp
所以建立一個新的 array 儲存 nums 的值
*/
var rotate = function(nums, k) {
    
    var temp = [];
    for(val of nums){
        temp.push(val);
    }
    
    k = k % nums.length;
    
    for(let i=0; i<nums.length; i++){
        let pos = i - k;
        if(pos < 0) pos += nums.length;
        nums[i] = temp[pos];
        
    }
    
};