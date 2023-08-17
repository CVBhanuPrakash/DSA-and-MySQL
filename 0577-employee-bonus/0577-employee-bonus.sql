SELECT Employee.name, Bonus.bonus from Employee
LEFT JOIN Bonus ON Employee.empId = Bonus.empId
WHERE bonus IS NULL || bonus < 1000;