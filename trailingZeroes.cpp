/*
  當出現0，也就是因數裡面含有2跟5，2這個數字到處都是，因此主要決定是n!裡面包含幾個5
  n = 25時，會出現5, 10, 15, 20 ,25共5個有5的數字，但25其實包含了5*5，所以25!總共會出現5+1=6個10。
*/

class Solution {
public:
    
    int trailingZeroes(int n) {
        int count = 0;
        while(n >= 5){
            count += n/5;
            n = n/5;
        }
        return count;
    }
};