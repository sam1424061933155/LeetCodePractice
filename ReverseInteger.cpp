# include <iostream>
using namespace std ;


int main() {
    
    while(1){

        int x;
        cin >> x;

        int sign = 1;
        int answer = 0;
        int temp;
            
        if(x >= INT_MAX || x <= INT_MIN){
            cout << "overflow in the begin"<<endl;
            return 0;
        }
            
        if(x<0){
            x = -x;
            sign = 0;
        }

        while(x){
            temp = x%10;
            x = x/10;
                
            if(answer > INT_MAX/10){
                return 0;
            }else if(answer == INT_MAX/10 && temp > 7){
                return 0;
            }else{
                answer = answer*10 + temp;
            }
                
        }

        if(sign == 0){
            answer = -answer;
        }
        cout <<"answer is "<< answer << endl; 
    }
        
    return 0;
    
};
