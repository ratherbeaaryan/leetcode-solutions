-- Last updated: 8/4/2026, 12:55:45 AM
-- Write your PostgreSQL query statement below

select product_id from Products 
where low_fats = 'Y' and recyclable = 'Y'
