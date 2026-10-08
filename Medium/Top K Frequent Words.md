> **Problem No.:** 692  
> **Problem Name:** Top K Frequent Words  
> **Problem Link:** [https://leetcode.com/problems/top-k-frequent-words/description/](https://leetcode.com/problems/top-k-frequent-words/description/)  


    class Solution {
        public List<String> topKFrequent(String[] words, int k) {
            int n = words.length;
            HashMap<String,Integer> wordFreq = new HashMap<>();
            for(int i=0;i<n;i++) {
                wordFreq.put(words[i],wordFreq.getOrDefault(words[i],0)+1);
            }
            Map<Integer,List<String>> map = new TreeMap<>(Comparator.reverseOrder());
    
            for(String key:wordFreq.keySet()) {
                if(map.containsKey(wordFreq.get(key))) {
                    map.get(wordFreq.get(key)).add(key);
                }else {
                    map.put(wordFreq.get(key),new ArrayList<>(Arrays.asList(key)));
                }
            }
            List<String> result = new ArrayList<>();
            int count = 0;
            for(int key:map.keySet()) {
                for(int i=0;i<map.get(key).size();i++){
                    result.add(map.get(key).get(i));
                    count++;
                }
                if(count >= k) break;
            }
            result.sort((a, b) -> {
                if (!wordFreq.get(a).equals(wordFreq.get(b))) {
                    return Integer.compare(wordFreq.get(b), wordFreq.get(a));
                }
                return a.compareTo(b);
            });
            return result.subList(0,k);
        }
    }