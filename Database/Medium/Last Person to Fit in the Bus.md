**Problem No.:** 1204  
**Problem Name:** Last Person to Fit in the Bus  
**Problem Link:** [LeetCode 1204 - Last Person to Fit in the Bus](https://leetcode.com/problems/last-person-to-fit-in-the-bus/description/)

<!--### Brute Force Method-->

```sql
WITH CUMULATIVE_WEIGHT AS (
    SELECT
    person_name,
    turn,
    SUM(weight) OVER(ORDER BY turn) AS cumulative_weight
    FROM Queue
)
SELECT person_name 
FROM CUMULATIVE_WEIGHT
WHERE cumulative_weight <= 1000
ORDER BY turn DESC
LIMIT 1;

```
