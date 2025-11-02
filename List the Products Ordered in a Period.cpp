# Write your MySQL query statement below
select Products.product_name , sum(Orders.unit) as unit
from Products join Orders 
on Products.product_id = Orders.product_id
where order_date Like '2020-02-%' 
group by Products.product_name
having Sum(Orders.unit) >=100;
