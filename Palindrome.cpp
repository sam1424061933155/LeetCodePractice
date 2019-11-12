# include <iostream>
#include <vector>
using namespace std ;


int main() {
    
    while(1){

        int x;
        cin >> x;

        vector<char> num;
        vector<char> anti_num;
        
        if(x<0){
            cout << "false" <<endl;
            return 0;
        }
        
        while(x){
            anti_num.push_back(x%10);
            x = x/10;
        }
        
        for(int i=anti_num.size()-1; i>=0; i--){
            num.push_back(anti_num[i]);
        }
        
        for(int i=0; i<num.size(); i++){
            if(num[i]!=anti_num[i]){
                cout << "false" <<endl;
                return 0;
            }
        }

        cout<< "true" <<endl;
        
    }
        
    return 0;
    
};
