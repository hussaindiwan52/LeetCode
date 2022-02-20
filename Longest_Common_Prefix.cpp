// https://leetcode.com/problems/longest-common-prefix/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        sort(strs.begin(),strs.end());
        int i=0,j=0;
        string prefix="";
        while(strs[0][i]!='\0' && strs[len-1][j]!='\0'){
            if(strs[0][i]==strs[len-1][j]){
                prefix+=strs[len-1][j];
            }
            else{
                break;
            }
            i++;
            j++;
        }
        return prefix;
    }
};
