select distinct(P.project_id), ROUND( avg(E.experience_years),2 ) as average_years 
from Project P 
left join Employee E using(employee_id)
group by project_id