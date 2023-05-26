# Write your MySQL query statement below
Select tweet_id
From tweets
where char_length(content) > 15