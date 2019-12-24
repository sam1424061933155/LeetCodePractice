# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


vector<int> reverseArray(vector<int> a) {
    vector<int> temp;
    for(int i=a.size()-1; i>=0; i--){
        temp.push_back(a[i]);
        cout << a[i] << " ";
    }
    cout << endl;
    return temp;

}
