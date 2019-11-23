# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

int removeDuplicates(vector<int>& nums, int val) {
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val){
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
