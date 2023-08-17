select e.name, b.bonus from Employee e
left join Bonus b using (empId)
where bonus<1000 or bonus is null
