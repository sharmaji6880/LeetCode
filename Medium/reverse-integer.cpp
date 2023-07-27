class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        string reverse = "";
        if(num[0]=='-') {
            reverse="-";
        }
        
        for(int i=num.length()-1 ;i>=0;i--) {

            if(num[i]=='-') {
                continue;
            }

            reverse+=num[i];

        }

        if(stol(reverse)>(pow(2,31)-1) || stol(reverse)<(-pow(2,31))) {
            return 0;
        }

        else 
        return (stoi(reverse));

        

        
    }
};
