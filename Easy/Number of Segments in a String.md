> **Problem Number:** 434 <br>
> **Problem Name:** Number of Segments in a String <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-segments-in-a-string/](https://leetcode.com/problems/number-of-segments-in-a-string/) <br>

**JavaScript Code:** <br>

    var countSegments = function(s) {
        s = s.trim();
        if(s.length == 0) {
            return 0;
        }
        let pattern = /\s+/;
        const arr = s.split(pattern)
        return arr.length;
    };