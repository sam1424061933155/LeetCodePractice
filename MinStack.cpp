# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> temp;
    
    MinStack() {

    }
    
    void push(int x) {
        s.push(x);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        temp = s;
        int min = INT_MAX;
        while(!temp.empty()){
            if(temp.top() < min){
                min = temp.top();
            }
            temp.pop();
        }
        return min;
    }
};