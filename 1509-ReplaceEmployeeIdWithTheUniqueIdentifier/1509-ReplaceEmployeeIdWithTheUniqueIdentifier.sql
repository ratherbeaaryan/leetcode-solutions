-- Last updated: 8/4/2026, 12:56:44 AM
-- Write your PostgreSQL query statement below
select Employees.name,EmployeeUNI.unique_id
from EmployeeUNI
right join Employees
on Employees.id = EmployeeUNI.id;
