class Solution {
public:
    bool isHappy(int n) {
        vector<int> record;
        vector<int>::iterator it;
        int sum = 0;
        
        while(sum!=1){
            sum = 0;
            it = find(record.begin(), record.end(), n);
            if(it != record.end()){
                return false;
            }
            record.push_back(n);
            
            while(n!=0){
                int digit = n%10;
                sum += digit*digit;
                n = n/10;
            }
            n = sum;
            
           
        }
        
        return true;
    }
};