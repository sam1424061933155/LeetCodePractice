# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;




string addBinary(string a, string b) {
    int len = max(a.size(), b.size());
    while(len>a.size()){
        a = "0" + a;
    }
    while(len>b.size()){
        b = "0" + b;
    }
    cout << "a = " << a << " b = " << b << endl; 
    len = max(a.size(), b.size());
    int temp_a, temp_b;
    int carry =0;
    string ans = "";
    for(int i=len-1; i>=0; i--){
        temp_a = a[i] - '0';
        temp_b = b[i] - '0';
        if((temp_a+temp_b+carry)>1){
            ans = to_string(temp_a+temp_b+carry-2) + ans;
            carry = 1;
        }else{
            ans = to_string(temp_a+temp_b+carry) + ans;
            carry = 0;
        }
        cout << "temp_a = " << temp_a << " temp_b = " << temp_b << " ans = " << ans << endl; 
    }
    if(carry==1){
        ans = "1"+ ans;
    }

    cout << "ans = " << ans << endl;
    return ans;
}


int main() {
    
    while(1){

        string a,b;
        cin >> a;
        cin >> b;
        addBinary(a,b);

    
    }
        
    return 0;
    
};
