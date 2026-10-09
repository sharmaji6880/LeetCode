> **Problem No.:** 508  
> **Problem Name:** Most Frequent Subtree Sum  
> **Problem Link:** [https://leetcode.com/problems/most-frequent-subtree-sum/description/](https://leetcode.com/problems/most-frequent-subtree-sum/description/)  


    class Solution {
        Map<TreeNode,Integer> map = new HashMap<>();
        Map<Integer,Integer> freq = new HashMap<>();
        public int subTreeSum(TreeNode root) {
            if(root == null) return 0;
            if(map.containsKey(root)) return map.get(root);
            int ans =  root.val + subTreeSum(root.left) + subTreeSum(root.right);
            map.put(root,ans);
            return ans;
        }
        public void helper(TreeNode root) {
            if(root==null) return;
            int ans = subTreeSum(root);
            freq.put(ans,freq.getOrDefault(ans,0)+1);
            helper(root.left);
            helper(root.right);
        }
        public int[] findFrequentTreeSum(TreeNode root) {
            helper(root);
            int maxFrequency = Integer.MIN_VALUE;
            for(int key:freq.keySet()) {
                if(freq.get(key) > maxFrequency) {
                    maxFrequency = freq.get(key);
                }
            }
    
            List<Integer> result = new ArrayList<Integer>();
            for(int key:freq.keySet()) {
                if(freq.get(key) == maxFrequency) {
                    result.add(key);
                }
            }
           int[] arr = result.stream().mapToInt(Integer::intValue).toArray();
           return arr;
        }
    }