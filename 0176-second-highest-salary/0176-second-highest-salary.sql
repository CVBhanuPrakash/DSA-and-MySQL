SELECT max(salary) as SecondHighestSalary
FROM employee
WHERE employee.salary < (SELECT max(salary) FROM employee)
