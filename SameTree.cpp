# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

/*
    iterative way to test the value of the tree
*/

bool isSameTree(TreeNode* p, TreeNode* q) {
    
    if(p==NULL && q==NULL) return true;
    if(p==NULL || q==NULL) return false;
    if(p->val != q->val) return false;
        
    return (isSameTree(p->left, q->left) &&
            isSameTree(p->right, q->right));
}



int main() {
    
    while(1){

      
    }
        
    return 0;
    
};
