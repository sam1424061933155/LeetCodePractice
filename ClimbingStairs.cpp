# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


/*
    Recursive way but TLE
*/

/*
int climbStairs(int n) {
    if(n==1 || n==0){
        return 1;
    }
        
    return climbStairs(n-1)+climbStairs(n-2);
}*/


/*
    DP, assume path[i] is the optimal way to get to n
    Way to reach i:
    Taking a single step from path[i-1] 
    Taking a step of 2 from path[i-2]
*/
int climbStairs(int n) {
    vector<int> path;
    path.push_back(1); // n=1
    path.push_back(2); // n=2
    path.push_back(3); // n=3
        
    for(int i=4; i<=n; i++){
        int temp = path[i-1-1] + path[i-2-1];
        path.push_back(temp);
    }
        
    return path[n-1];
        
}


int main() {
    
    while(1){

      int n;
      cin >> n;


      int result = climbStairs(n);
      cout << "result = " << result << endl;
    
    }
        
    return 0;
    
};
