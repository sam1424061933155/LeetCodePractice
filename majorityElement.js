var majorityElement = function(nums) {
    let count ={}
    for(let i=0; i<nums.length; i++){
        if(! (nums[i] in count) ){
            count[nums[i]] = 1;
        }else{
            count[nums[i]] = count[nums[i]] + 1;
        }
    }
    let max = Number.MIN_VALUE;
    let maxNum = 0;
    for(key in count){
        if(count[key] > max){
            max = count[key];
            maxNum = key;
        }
    }
    return maxNum;
};