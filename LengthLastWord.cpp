# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


/*

    may contain space in the last Ex: 'a   ' ans = 1

*/

int lengthOfLastWord(string s) {
    if(s==""){
        return 0;
    }
    
    // find the last non-space letter   
    int start;
    for(int i= s.size()-1; i>=0; i--){
        if(s[i]!=' '){
            start = i;
            break;
        }
    }
    
    int len = 0;
    for(int i=start; i>=0; i--){
        if(s[i] != ' '){
            len++;
        }else{
            break;
        }    
    }
    return len;
        
    }

int main() {
    
    while(1){

    }
        
    return 0;
    
};
