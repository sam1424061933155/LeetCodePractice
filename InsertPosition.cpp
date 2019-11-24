# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


int searchInsert(vector<int>& nums, int target) {
    int pos = -1;
        
    for(int i=0; i<nums.size(); i++){
        if(nums[i] < target){
            pos = i;
        }
        if(nums[i] == target){
            return i;
        }
            
    }

    // make sure if all the value in nums is bigger than target
    if(pos == -1){
        return 0;
    }
        
    return pos+1;
        
}

int main() {
    
    while(1){

        

    }
        
    return 0;
    
};
