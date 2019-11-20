# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


int main() {
    
    while(1){

        string s;
        cin >> s;

        stack<char> temp;
        map<char, char> bracket;
        
        bracket['(']=')';
        bracket['{']='}';
        bracket['[']=']';
        
        if(s.size()==0){
            cout << "true" << endl;
        }
                
        for(int i=0; i<s.size(); i++){
            if(temp.size()!=0 && s[i] == bracket[temp.top()]){
                temp.pop();
            }else{
                temp.push(s[i]);
            }
        }
        
        if(temp.size() == 0){
            cout << "true" << endl;
        }else{
            cout << "false" << endl;
        }
               
    }
        
    return 0;
    
};
