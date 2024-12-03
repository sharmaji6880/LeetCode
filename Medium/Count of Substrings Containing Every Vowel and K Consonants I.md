> **Problem Number:** 3305 <br>
> **Problem Name:** Count of Substrings Containing Every Vowel and K Consonants I <br>
> **Problem Link:** [https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-i](https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-i) <br>

    class Solution {
    public:
        inline static const set<char> vowels = {'a','e','i','o','u'};
        int countOfSubstrings(string word, int k) {
            
            int n = word.size();

            vector<int> numberOfConsonants(n+1,0);

            for(int i=0;i<n;i++) {
                if( vowels.count(word[i]) == 0) {
                    numberOfConsonants[i+1] = numberOfConsonants[i] + 1;
                } else {
                    numberOfConsonants[i+1] = numberOfConsonants[i];
                }
            }

            int count = 0;
            string subString;
            set<int> vowelsAppeared;
            for(int i=0;i<n;i++) {
                vowelsAppeared.clear();

                for(int j=i;j<n;j++) {
                    if( vowels.count(word[j]) ) {
                        vowelsAppeared.insert(word[j]);
                    }
                    int consonants = numberOfConsonants[j+1] - numberOfConsonants[i];
                    if( consonants == k && vowelsAppeared.size() == 5) {
                        count += 1;
                        cout<<subString<<endl;
                    }
                }
            }
            return count;
        }
    };