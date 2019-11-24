# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


string countAndSay(int n) {
    string temp[30] = {"0"};
    temp[0] = "1";
    temp[1] = "11";
    temp[2] = "21";
    temp[3] = "1211";
    temp[4] = "111221";
        
    if(n<6){
        return temp[n-1];
    }
        
    string ans;
    for(int i=4; i<n-1; i++){
        int count = 1;
        char num = temp[i][0];
        ans = "";
        cout << "temp[" << i << "] = " << temp[i] << " size = " << temp[i].size() << endl;
        for(int j=0; j<temp[i].size(); j++){
            if(temp[i][j+1] == num){
                count ++;
            }else if(temp[i][j+1]!=num || j==temp[i].size()-1){
                ans += to_string(count);
                ans += num;
                count = 1;
                num = temp[i][j+1];
                cout << "progress j = " <<  j << " ans = " << ans << " | change num = " << num <<endl;
            }
        }
        temp[i+1] = ans;
        cout << "temp[" << i+1 << "] = " << temp[i+1] << endl;
    }
    cout << "Final ans = " << temp[n-1] << endl;
    return temp[n-1];
}

int main() {
    
    while(1){

        int n;
        cin >> n;
        countAndSay(n);

    }
        
    return 0;
    
};
