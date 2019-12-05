# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


int singleNumber(vector<int>& nums) {
    vector<int> temp;
    vector<int>::iterator result;
    for(int i=0; i<nums.size(); i++){
        result = find( temp.begin( ), temp.end( ), nums[i] );
        if(result == temp.end()){
            temp.push_back(nums[i]);
        }else{
            temp.erase(result);
        }
    }
    return temp[0];
}



int main() {
    
    while(1){

      
    }
        
    return 0;
    
};
