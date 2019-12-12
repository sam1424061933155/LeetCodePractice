# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


vector<vector<int> > generate(int numRows) {
    
    vector<vector<int> > ans;
       
    for(int i=0; i<numRows; i++){
        vector<int> temp;
        if(i==0){
            temp.push_back(1);
        }else if(i==1){
            temp.push_back(1);
            temp.push_back(1);
        }else{
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    temp.push_back(1);
                }else{
                	//cout<< "ans (" << i-1 << "," << j-1 << ") = " << ans[i-1][j-1] << " ans (" << i-1 << "," << j << ") = " << ans[i-1][j] <<endl;
                    temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
            }
                
        }   
        
        cout << "row  " << i << " = ";
        for(int j=0; j<temp.size();j++){
        	cout << temp[j] << " ";
        } 
        cout << endl;

        ans.push_back(temp);
    }
        
    return ans;
}


int main() {
    
    while(1){
    	int row;
    	cin >> row;
    	generate(row);
     
    }
        
    return 0;
    
};
