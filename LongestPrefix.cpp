# include <iostream>
# include <vector>
# include <string>

using namespace std ;


int main() {
    
    while(1){

        vector<string> strs;
        string temp;

        while(cin >> temp){
            if(temp == "0"){
                break;
            }
            strs.push_back(temp);
        }
        cout << "size " << strs.size() << endl;

        string answer="";

        if(strs.size() == 0){
            //return answer; 
            cout << "strs size is 0" << endl;
        }
        
        for(int i=0; i<strs[0].length(); i++){
            int check = 1;
            for(int j=1; j<strs.size(); j++){
                if(strs[0][i] != strs[j][i]){
                    check = 0;
                    break;
                }
            }
            if(check){
                answer += strs[0][i];
            }else{
                break;
            }
        }
        
        cout << "prefix = " << answer << endl;        
    }
        
    return 0;
    
};
