SELECT name,bonus FROM Employee LEFT JOIN Bonus on Employee.empId=Bonus.empId WHERE bonus<1000 OR bonus IS NULL;
