# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

int strStr(string haystack, string needle) {
        
    if(needle == ""){
    	cout << "needle is null" <<endl; 
        return 0;
    }
        
    int check;
    for(int i=0 ; i<haystack.size(); i++){
    	check = 1;
        if(haystack[i] == needle[0]){
            for(int j=1; j<needle.size(); j++){
                if(haystack[i+j] != needle[j]){
                    check = 0;
                    break;
                }
            }
            if(check){
            	cout << "found at index "<< i <<endl;
                return i;
            }
        
        }
    }
    cout << "not found" <<endl;    
    return -1;
        
 }



int main() {
    
    while(1){

        string haystack, needle;
        cin >> haystack;
        cin >> needle;
        strStr(haystack, needle);

    }
        
    return 0;
    
};
