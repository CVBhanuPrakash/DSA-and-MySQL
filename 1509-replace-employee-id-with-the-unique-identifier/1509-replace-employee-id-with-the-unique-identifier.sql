select I.unique_id, E.name from EmployeeUNI I
right join Employees E using(id)