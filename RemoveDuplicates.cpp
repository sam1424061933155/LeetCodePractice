# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==0){
            return 0;
        }
        
        for(int i=1 ; i<nums.size(); i++){
            if(nums[i-1] == nums[i]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }


int main() {
    
    while(1){

        int temp;
        vector<int> nums;

        while( cin >> temp && temp!=0){
            nums.push_back(temp);

        }

        removeDuplicates(nums);

        cout << "nums = ";
        for(int i=0; i<nums.size(); i++){
            cout << nums[i] << " "; 
        }
        cout << endl;    
    }
        
    return 0;
    
};
