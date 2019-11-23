# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


bool checkDuplicate(string temp){
    size_t found;
    for(int i=0; i<temp.size(); i++){
        found = temp.find(temp[i],i+1);
        if(found!= temp.npos){
            return false;
        }
    }
    return true;
} 


int lengthOfLongestSubstring(string s) {
    int len = s.size();
    int ans;
    for(int i=0; i<len ; i++){
        string temp = "";
        temp += s[i];
        for(int j=i+1; j<=len ; j++){
            temp += s[j];
            cout << "checking string = " << temp << "   result = " << checkDuplicate(temp) << endl; 
            if(checkDuplicate(temp)){
                ans = temp.size();
            }
        }
    }
    cout << "ans = " << ans <<endl;
    return 0;
}

int main() {
    
    while(1){

        string s;
        cin >> s;
        
        lengthOfLongestSubstring(s);

    }
        
    return 0;
    
};
