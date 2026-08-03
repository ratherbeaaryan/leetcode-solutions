-- Last updated: 8/4/2026, 12:57:00 AM
-- Write your PostgreSQL query statement below
select distinct author_id as id
from Views 
where author_id = viewer_id
order by id;
