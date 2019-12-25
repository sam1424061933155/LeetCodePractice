# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

bool isPalindrome(string s) {
        
    if(s.size() == 0 ) return true;
    vector<char> temp;
    for(int i=0; i<s.size(); i++){
        if( ('a' <= s[i] && 'z' >= s[i]) || ('A' <= s[i] && 'Z' >= s[i])){
            temp.push_back(tolower(s[i]));
        }else if('0'<=s[i] && '9' >= s[i]){
            temp.push_back(s[i]);
        }
    }

    // check if s = " " or s = 'a'
    if(temp.size()==0 || temp.size()==1) return true;
        
    int index = 0;
    for(int i= temp.size()-1; i>=(temp.size()/2); i--){
        if(temp[i]!=temp[index]) return false;
        index++;
    }
    return true;
}