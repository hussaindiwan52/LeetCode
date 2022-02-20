// https://leetcode.com/problems/robot-return-to-origin/
class Solution {
public:
    bool judgeCircle(string str) {
        int horizontal=0,vertical=0,length=str.length();
        for (int i = 0; i < length; i++) {
            switch(str[i]){
                case 'L':
                    horizontal--;
                    break;
                case 'R':
                    horizontal++;
                    break;
                case 'U':
                    vertical++;
                    break;
                case 'D':
                    vertical--;
                    break;
            }
        }
        if(horizontal==0 && vertical==0){
            return true;
        }
        return false;
    }
};
