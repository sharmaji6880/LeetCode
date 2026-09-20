> **Problem No.:** 503  
> **Problem Name:** Next Greater Element II  
> **Problem Link:** [https://leetcode.com/problems/next-greater-element-ii/description/](https://leetcode.com/problems/next-greater-element-ii/description/)  

**Brute Force**

    class Solution {
        public int[] nextGreaterElements(int[] nums) {
            int n = nums.length;
            int[] nextGreater = new int[n];
            Arrays.fill(nextGreater,-1);
            for(int i=0;i<n;i++) {
                for(int j=1;j<n;j++) {
                    if(nums[(i+j) % n] > nums[i]) {
                        nextGreater[i] = nums[(i+j)%n];
                        break;
                    }
                }
            }
            return nextGreater;
        }
    }


**Optimal Approach Using Monotonic Stack**

    class Solution {
        public int[] nextGreaterElements(int[] nums) {
            int n = nums.length;
            int[] nextGreater = new int[n];
            Arrays.fill(nextGreater,-1);
            Stack<Integer> st = new Stack<>();
            for(int i=0;i<2*n;i++) {
                if(st.empty() || nums[st.peek() % n] >= nums[i%n]) {
                    st.push(i);
                    continue;
                }
                while(!st.empty() && nums[st.peek() % n] < nums[i%n]) {
                    nextGreater[st.peek()%n] = nums[i%n];
                    st.pop();
                }
                st.push(i);
            }
            
            return nextGreater;
        }
    }