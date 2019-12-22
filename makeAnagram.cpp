# include <iostream>
# include <vector>
# include <string>
# include <stack>
# include <map>

using namespace std ;


int makeAnagram(string a, string b) {
    vector<char> charA;
    vector<char> charB;

    for(int i=0; i<a.size(); i++){
        charA.push_back(a[i]);
    }
    for(int i=0; i<b.size(); i++){
        charB.push_back(b[i]);
    }
    vector<char>::iterator it;
    for(int i=0; i<b.size(); i++){
        it = find(charA.begin(), charA.end(), b[i]);
        if(it != charA.end()){
            //cout << "charA delete = " << *it;
            charA.erase(it);
            it = find(charB.begin(), charB.end(), b[i]);
            //cout << " ,charB delete = " << *it <<endl;
            charB.erase(it);
        }
    }
    //cout << "sizeA = " << charA.size() << " ,sizeB = " << charB.size() <<endl;
    return charA.size()+charB.size();
}
