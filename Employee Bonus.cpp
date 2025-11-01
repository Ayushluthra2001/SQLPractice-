# Write your MySQL query statement below

select name , bonus
from Employee Left Join Bonus
on Employee.empId = Bonus.empID
where Bonus.bonus < 1000 or Bonus.bonus is null;
