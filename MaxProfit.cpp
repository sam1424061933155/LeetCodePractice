# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

int maxProfit(vector<int>& prices) {
    if(prices.size()==0) return 0;
    
    int maxProfit = 0;
    for(int i=0; i<prices.size()-1; i++){
        for(int j=i+1; j<prices.size(); j++){
            if( (prices[i] < prices[j]) && ((prices[j]- prices[i]) > maxProfit)){
                maxProfit = prices[j] - prices[i];
                //cout << "buy " << i << " sell "<< j << " profit " << maxProfit << endl;
            }
        }
    }
    return maxProfit;   
}