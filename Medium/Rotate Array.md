> **Problem Number:** 189 <br>
> **Problem Name:** Rotate Array <br>
> **Problem Link:** [https://leetcode.com/problems/rotate-array/](https://leetcode.com/problems/rotate-array/) <br>

**Using Extra Memory:**

    class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            k%=n;
            if(k==0 || n==1) {
                return;
            }
            vector<int> ans;
            for(int i=n-k;i<n;i++) {
                ans.push_back(nums[i]);
            }
            for(int i=0;i<n-k;i++) {
                ans.push_back(nums[i]);
            }
            nums=ans;
        }
    };

**Modifying In Place:**

    class Solution {
    public:
        void reverseArray(vector<int> &arr, int a, int b) {
            int size = b - a + 1;
            int temp,x;
            for(int i = a; i < a + size / 2; i++) {
                temp = arr[i];
                x = b - i + a;
                arr[i] = arr[x];
                arr[x] = temp;
            }
        }
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            k %= n;

            if( n == 1 || k == 0) {
                return;
            }

            reverseArray(nums,0,n-k-1);
            reverseArray(nums,n-k,n-1);
            reverseArray(nums,0,n-1);
        }
    };


