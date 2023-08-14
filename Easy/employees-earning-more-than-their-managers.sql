# Write your MySQL query statement below
SELECT name as Employee FROM Employee as c WHERE salary > (SELECT salary from Employee where id=c.managerID);
