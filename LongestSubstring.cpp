# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

int lengthOfLongestSubstring(string s) {
    

    vector<string> subTemp;     
    int len = s.size();
        
    while(len){

        // list all the possible substring
        int index = 0;
        while((index+len) <= s.size()){
            string temp = "";
            for(int i=index; i<index+len; i++){
                temp += s[i];
            }
            subTemp.push_back(temp);
            index ++;
        }
        
        cout << "len is " << len << endl;
        cout << "subString = ";
        for(int i=0 ; i<subTemp.size(); i++){
            cout << subTemp[i] << " ";
        }
        cout << endl;

        // find if the subString repeating
        for(int i=0; i<subTemp.size(); i++){
            int check = 1;
            cout << "check subString " << subTemp[i] << endl; 
            for(int j=0; j<subTemp[i].size(); j++){
                for(int k=j+1; k<subTemp[i].size(); k++){
                    if(subTemp[i][j] == subTemp[i][k]){
                        cout << "find the same at j = " << j << " k = " << k << endl;
                        check = 0;
                        break;
                    }
                }
                if(check == 0){
                    break;
                }
            }
            if(check){
                cout << "longest subString length = "<< subTemp[i].size() << endl; 
                return (subTemp[i].size());
            }
        }
            
        subTemp.clear();
        len--;    
    }
    cout << "longest subString length = 0" << endl; 
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
