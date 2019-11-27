# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;




vector<int> plusOne(vector<int>& digits) {
    vector<int> ans,temp;
    int carry = 1, sum;
        
    for(int i=digits.size()-1; i>=0; i--){
        sum = digits[i] + carry;
        if(sum > 9){
            carry = 1;
            sum = 0;
        }else{
            carry = 0;
        }
        temp.push_back(sum);
    }
    
    // make sure if there is a carry in the front
    if(carry!=0){
        temp.push_back(1);
    }
    
    for(int i= temp.size()-1; i>=0; i--){
        ans.push_back(temp[i]);
    }
    return ans;
}


int main() {
    
    while(1){

        int temp;
        vector<int> digits;

    
    }
        
    return 0;
    
};
