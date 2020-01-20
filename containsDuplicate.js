var containsDuplicate = function(nums) {
    
    var temp = []
    
    for( val of nums){
        if(temp.indexOf(val) == -1){
            temp.push(val);
        }else{
            return true;
        }
    }
    
    return false;
    
};