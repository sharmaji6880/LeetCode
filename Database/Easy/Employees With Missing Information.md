> **Problem Number:** 1965 <br>
> **Problem Name:** Employees With Missing Information <br>
> **Problem Link:** [https://leetcode.com/problems/employees-with-missing-information/](https://leetcode.com/problems/employees-with-missing-information/) <br>

    -- This query is as per the syntax of OracleSQL
    
    select employee_id from Employees where employee_id not in (select employee_id from Salaries)
    union
    select employee_id from Salaries where employee_id not in (select employee_id from Employees);