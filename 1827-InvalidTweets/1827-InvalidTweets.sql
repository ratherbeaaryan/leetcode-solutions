-- Last updated: 8/4/2026, 12:55:50 AM
-- Write your PostgreSQL query statement below
select tweet_id from Tweets
where length(content) > 15;
