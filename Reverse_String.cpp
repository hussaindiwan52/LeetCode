// https://leetcode.com/problems/reverse-string/
class Solution {
public:

    void reverseString(vector<char>& str) {
        int length=str.size();
        for (int i = 0; i < length/2; i++) {
            char temp=str[i];
            str[i]=str[length-i-1];
            str[length-i-1]=temp;
        }
    }
};
