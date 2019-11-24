# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

/*

其中 dp[i][j] 表示字符串区间 [i, j] 是否为回文串，
当 i = j 时，只有一个字符，肯定是回文串，
如果 i = j + 1，说明是相邻字符，此时需要判断 s[i] 是否等于 s[j]，
如果i和j不相邻，即 i - j >= 2 时，除了判断 s[i] 和 s[j] 相等之外，dp[i + 1][j - 1] 若为真，就是回文串，通过以上分析，可以写出递推式如下：

dp[i, j] = 1                                    if i == j

         = s[i] == s[j]                         if j = i + 1

         = s[i] == s[j] && dp[i + 1][j - 1]     if j > i + 1      

*/

string longestPalindrome(string s) {
        
    int dp[1001][1001];
    int left = 0, len=1;
    for(int i=0; i<s.size(); i++){
        dp[i][i] = 1;
        for(int j=0; j<i; j++){
            dp[j][i] = (s[i] == s[j]) && ((i-j)<2 || dp[j+1][i-1]);
            if(dp[j][i] && len<(i-j+1)){
                len = i-j+1;
                left = j;
            }
        }
    }
    cout << "Longest Palindrome Substring = " << s.substr(left,len) << endl;
    return s.substr(left,len);
}


int main() {
    
    while(1){

        string s;
        cin >> s;

        longestPalindrome(s);

    }
        

    
        
    return 0;
    
};
