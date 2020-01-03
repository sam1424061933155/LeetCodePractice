class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> temp;
        vector<char> unique;
        vector<char>::iterator it;

        for(int i=0; i<s.size(); i++){
            it = find(temp.begin(), temp.end(), s[i]);
            if(it == temp.end()){
                temp.push_back(s[i]);
                unique.push_back(s[i]);
            }else{
                it = find(unique.begin(), unique.end(), s[i]);
                if(it != unique.end()){
                    unique.erase(it);   
                }
            }
        }
        
        if(unique.size() == 0) return -1;
        else return s.find(unique[0]);
        
        
    }
};