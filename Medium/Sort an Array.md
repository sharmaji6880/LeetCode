> **Problem Number:** 912 <br>
> **Problem Name:** Sort an Array <br>
> **Link:** [https://leetcode.com/problems/sort-an-array/](https://leetcode.com/problems/sort-an-array/) <br>

**Using Merge Sort**

    class Solution {
    public:
        void merge(vector<int> &arr, int low, int mid , int high) {
            int left = low;
            int right = mid+1;
            vector<int> c;

            while(left <= mid && right <= high) {
                if(arr[left] <= arr[right]) {
                    c.push_back(arr[left]);
                    left++;
                }else {
                    c.push_back(arr[right]);
                    right++;
                }
            }
            if(left > mid) {
                while(right <= high) {
                    c.push_back(arr[right]);
                    right++;
                }
            }else if(right > high) {
                while(left <= mid) {
                    c.push_back(arr[left]);
                    left++;
                }
            }
            int index = 0;
            for(int i=low;i<=high;i++) {
                arr[i]=c[index];
                index++;
            }
        }
        void mergesort(vector<int> &arr,int low,int high ) {
            if(low >= high) {
                return;
            }
            int mid = (low+high)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
        vector<int> sortArray(vector<int> &arr) {
            mergesort(arr,0,arr.size()-1);
            return arr;
        }
    };
