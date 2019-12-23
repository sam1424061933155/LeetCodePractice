# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


int beautifulBinaryString(string b) {
    if(b.find("010") == b.npos) return 0;
    int count = 0;
    for(int i=0; i<b.size()-2; i++){
        if(b[i]=='0' && b[i+1] == '1' && b[i+2] == '0'){
            b[i+2] = 1;
            count ++;
        }
    }
    return count;

}