# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

/*
    compare from the biggest (the last value in the merged array) to smallest
*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int index_m = m-1, index_n = n-1, index_mix = m+n-1;
        
    while(index_m>=0 && index_n>=0){
        if(nums2[index_n]>nums1[index_m]){
            nums1[index_mix--] = nums2[index_n--];              
        }else{
            nums1[index_mix--] = nums1[index_m--]; 
        }
    }
    
    // if there is still number in nums2, put into nums1    
    while(index_n >= 0){
        nums1[index_mix--] = nums2[index_n--];
    }
}



int main() {
    
    while(1){

      
    }
        
    return 0;
    
};
