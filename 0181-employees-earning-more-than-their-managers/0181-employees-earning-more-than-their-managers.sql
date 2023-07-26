# Write your MySQL query statement below
SELECT name AS Employee
FROM Employee e1
WHERE salary > (SELECT salary FROM Employee WHERE id=e1.managerId)
