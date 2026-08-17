class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";
        for(char c: s){
            if(isalnum(c)) {
                newS += tolower(c);
            }
        }
        if(newS == string(newS.rbegin(), newS.rend())) return true;
        else return false;
    }
    
};
