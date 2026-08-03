-- Last updated: 8/4/2026, 12:56:08 AM
-- Write your PostgreSQL query statement below
select Visits.customer_id,
count(*) as count_no_trans
from Visits
left join Transactions
on Visits.visit_id = Transactions.visit_id
where Transactions.transaction_id is NULL
group by customer_id