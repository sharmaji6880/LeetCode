class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size(),i=0,ma=0,mb=0;
        while(i!=n) {
            int prev=i;
            if(colors[i]=='A') {
                while(colors[i]=='A') {
                    i++;
                }
                if(i-prev >= 3) {
                    ma+=i-prev-2;
                    prev=i;
                }
                continue;
            }
            if(colors[i]=='B') {
                while(colors[i]=='B') {
                    i++;
                }
                if(i-prev >= 3) {
                    mb+=i-prev-2;
                    prev=i;
                }
                continue;
            }

        }
        if(ma>mb) {
            return true;
        }
        return false;
    }
};
