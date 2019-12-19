# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


int sockMerchant(int n, vector<int> ar) {
    map<int, int> sockRecord;
    map<int, int>::iterator it;
    for(int i=0; i<ar.size(); i++){
        it = sockRecord.find(ar[i]);
        if(it != sockRecord.end()){
            it->second +=1;
        }else{
            sockRecord[ar[i]] = 1;
        }
    }
    int pairs = 0;
    for(it = sockRecord.begin(); it!= sockRecord.end(); it++){
        pairs += (it->second)/2;
    }

    return pairs;
}