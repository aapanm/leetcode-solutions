# Write your MySQL query statement below
SELECT
	users.NAME,
	sum( amount ) AS balance 
FROM
	transactions
	INNER JOIN users ON transactions.account = users.account 
GROUP BY
	transactions.account 
HAVING
	sum( amount ) > 10000