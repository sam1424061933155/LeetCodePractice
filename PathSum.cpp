# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


/* run through the the path
   subtract val each time to see the outcome of sum
*/

bool hasPathSum(TreeNode* root, int sum) {
        
    if(!root) return false;
        
    sum = sum - root->val;
    if(!root->right && !root->left && sum==0) return true;
            
    return  (hasPathSum(root->left, sum) || hasPathSum(root->right, sum));
}


int main() {
    
    while(1){

     
    }
        
    return 0;
    
};
