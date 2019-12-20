# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

void minimumBribes(vector<int> q) {
    int count =0;
    for(int i=q.size()-1; i>=0; i--){
        // move found
        if(q[i]!=i+1){
            if( (i-1)>=0 && q[i-1] == i+1){
                count ++;
                q[i-1] = q[i];
                q[i] = i+1;
            }else if( (i-2)>=0 && q[i-2] == i+1){
                count +=2;
                q[i-2] = q[i-1];
                q[i-1] = q[i];
                q[i] = i+1;
            }else{
                cout << "Too chaotic" << endl;
                return;
            }
        }
    }
    cout << count <<endl;
    return;
}