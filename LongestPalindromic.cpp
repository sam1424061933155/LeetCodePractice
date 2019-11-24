# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

bool checkPalindromic(string temp){
    for(int i=0; i<temp.size()/2; i++){
        if(temp[i] != temp[temp.size()-1-i]){
            return false;
        }
    }
    return true;
}

string longestPalindrome(string s) {
        
    for(int i = s.length(); i>0; i--){
        for(int j = 0; j+i<=s.length(); j++){
            string temp = s.substr(j, i);
            if(checkPalindromic(temp)){
                cout << "longest substring = " << temp <<endl;
                return "";
                //return temp;
            }
        }
    }

    cout << "longest substring = not found" <<endl;    
    return "";
    //return "";
}


int main() {
    
    while(1){

        string s;
        cin >> s;

        longestPalindrome(s);

    }
        

    
        
    return 0;
    
};
