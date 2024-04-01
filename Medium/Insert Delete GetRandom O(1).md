> **Problem Number:** 380 <br>
> **Problem Name:** Insert Delete GetRandom O(1) <br>
> **Problem Link:** [https://leetcode.com/problems/insert-delete-getrandom-o1/description/](https://leetcode.com/problems/insert-delete-getrandom-o1/description/) <br>

    class RandomizedSet {
    public:
        set<int> s;
        RandomizedSet() {
            s={};
        }
        
        bool insert(int val) {
            if(s.count(val) == 0) {
                s.insert(val);
                return true;
            }
            return false;
        }
        
        bool remove(int val) {
            if(s.count(val)) {
                s.erase(val);
                return true;
            }
            return false;
        }
        
        int getRandom() {
        int random = rand() % s.size();

        set<int>::iterator it = s.begin();

        for(int i=0;i<random;i++) {
            it++;
        }

        return *(it);
        }
    };
