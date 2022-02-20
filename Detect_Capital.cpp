// https://leetcode.com/problems/detect-capital/
class Solution {
public:
    bool isUpper(char c){
        if(c>='A'&& c<='Z'){
            return true;
        }
        return false;
    }

    bool allUpper(string str,int length){
        for (int i = 0; i < length; i++) {
            if(!isUpper(str[i])){
                return false;
            }
        }
        return true;
    }
    bool allLower(string str,int length){
        for (int i = 0; i < length; i++) {
            if(isUpper(str[i])){
                return false;
            }
        }
        return true;
    }
    bool firstCapital(string str,int length){
        if(isUpper(str[0])){
            for (int i = 1; i < length; i++) {
                if(isUpper(str[i])){
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    bool detectCapitalUse(string str) {
        int length=str.length();
        if(allUpper(str,length)||allLower(str,length)||firstCapital(str,length)){
            return true;
        }
        return false;
    }
};
