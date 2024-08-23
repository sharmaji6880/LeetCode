> **Problem Number:** 592 <br>
> **Problem Name:** Fraction Addition and Subtraction <br>
> **Problem Link:** [https://leetcode.com/problems/fraction-addition-and-subtraction/](https://leetcode.com/problems/fraction-addition-and-subtraction/) <br>

    class Solution {
    public:
        string fractionAddition(string expression) {

        int n = expression.size(); // length of the string expression

        vector<string> denominators,numerators,symbols; // these vectors store the denominators
        // numerators and symbols respectively of the fractions in the order in which they appear
        int prev;

        if(expression[0] == '-') {
            symbols.push_back("-");
            prev = 1;
        }
        else {
            symbols.push_back("+");
            prev = 0;
        }

        for(int i=1;i<n;i++) {
                if(expression[i] == '-') {
                    symbols.push_back("-");
                }
                else if(expression[i] == '+') {
                    symbols.push_back("+");
                }
            }

            for(int i=0;i<n;i++) {
                if(expression[i] == '-' || expression[i] == '+') {
                    prev = i+1;
                }
                if(expression[i] == '/') {
                    numerators.push_back(expression.substr(prev,i-prev));
                }
            }

            for(int i=0;i<n;i++) {
                if(expression[i] == '/') {
                    prev = i+1;
                }
                if(i == n-1) {
                    denominators.push_back(expression.substr(prev,i-prev+1));
                    continue;
                }
                if( (expression[i] == '+' || expression[i] == '-') && i!=0 ) {
                    denominators.push_back(expression.substr(prev,i-prev));
                }
            }
            

            long num = 0, den = 1;

            for(auto x:denominators) {
                den *= stol(x);
            }
            n = symbols.size();

            for(int i=0;i<n;i++) {
                if(symbols[i] == "+") {
                    num += ( den/(stol(denominators[i])) * stol(numerators[i]) );
                }else {
                    num -= ( den/(stol(denominators[i])) * stol(numerators[i]) );
                }
            }

            if(num == 0) {
                return "0/1";
            }
            char sign;

            if(num * den >= 0) {
                sign = '+';
            }else {
                sign = '-';
            }
            num = abs(num);
            den = abs(den);

            int Min = min(num,den);
            for(int i=Min;i>=1;i--) {
                if(num % i == 0 && den % i == 0) {
                    num /= i;
                    den /= i;
                    break;
                }
            }
            string ans = "";

            if(sign == '-') {
                ans += "-";
            }

            ans += to_string(num);
            ans += "/";
            ans += to_string(den);


            return ans;

        }
    };
