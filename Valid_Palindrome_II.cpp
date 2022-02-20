// https://leetcode.com/problems/valid-palindrome-ii/
static const int iofast = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool validPalindrome(string str) {
        int length=str.length();
        int start =0,end=length-1;
        while(start<end){
            if(str[start]==str[end]){
                start++;
                end--;
                continue;
            }
            int left=start+1;
            int right=end;
            while(left<right){
                if(str[left]==str[right]){
                    left++;
                    right--;
                    continue;
                }
                break;
            }
            if(left>=right){
                return true;
            }
            left=start;
            right=end-1;
            while(left<right){
                if(str[left]==str[right]){
                    left++;
                    right--;
                    continue;
                }
                break;
            }
            if(left>=right){
                return true;
            }
            return false;
        }
        return true;
        }
};
