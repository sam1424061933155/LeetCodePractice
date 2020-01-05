class Solution {
public:
    bool isPrime(int n){
        // Eratosthenes演算法，小於等於根號N的所有質數去除N，若均無法整除則N為質數
        int up = sqrt(n) +1;
        for(int i=2; i<up; i++){
            if(n%i == 0){
                return false;
            }
        }
        
        return true;
    }
    
    int countPrimes(int n) {
        int count = 0;
        
        for(int i=2; i<n; i++){
            if(isPrime(i)){
                count ++;
            }    
        }
        return count;
    }
};