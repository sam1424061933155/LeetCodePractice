# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> ans;
    vector<vector<int>> seq;

    for(int i=0; i<n; i++){
        vector<int> temp;
        seq.push_back(temp);
    }

    int seqNum, indexNum;
    int lastAns = 0;
    for(int i=0; i<queries.size(); i++){
        
        seqNum = (queries[i][1] ^ lastAns) % n;
        if(queries[i][0] == 1){
            seq[seqNum].push_back(queries[i][2]);
        }else{
            indexNum = queries[i][2] % seq[seqNum].size();
            lastAns = seq[seqNum][indexNum];
            ans.push_back(lastAns);
            cout << lastAns << endl;
        }
            
        
    }

    return ans;
    

}