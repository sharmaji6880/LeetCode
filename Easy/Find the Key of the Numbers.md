> **Problem Number:** 3270 <br>
> **Problem Name:** Find the Key of the Numbers <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-key-of-the-numbers](https://leetcode.com/problems/find-the-key-of-the-numbers) <br>

    class Solution {
    public:
        int generateKey(int num1, int num2, int num3) {
            string s1,s2,s3;
            s1 = to_string(num1);
            s2 = to_string(num2);
            s3 = to_string(num3);

            int size1 = s1.size(),size2 = s2.size(),size3 = s3.size();

            if(size1 < 4) {
                for(int i=0; i<4-size1; i++) {
                    s1.insert(0,"0");
                }
            }
            if(size2 < 4) {
                for(int i=0; i<4-size2; i++) {
                    s2.insert(0,"0");
                }
            }
            if(size3 < 4) {
                for(int i=0; i<4-size3; i++) {
                    s3.insert(0,"0");
                }
            }

            string s = "";
            int n1,n2,n3;
            for(int i=0;i<4;i++) {
                n1 = s1[i]-'0';
                n2 = s2[i]-'0';
                n3 = s3[i]-'0';

                s += to_string(min(min(n1,n2),n3));
            }
            return stoi(s);

        }
    };