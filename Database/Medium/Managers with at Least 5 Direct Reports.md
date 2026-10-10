> **Problem No.:** 570  
> **Problem Name:** Managers with at Least 5 Direct Reports  
> **Problem Link:** [https://leetcode.com/problems/managers-with-at-least-5-direct-reports/description/](https://leetcode.com/problems/managers-with-at-least-5-direct-reports/description/)  


    SELECT name FROM Employee WHERE id in (SELECT  managerId FROM Employee GROUP BY managerId HAVING COUNT(id) >= 5); 