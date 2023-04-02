# Write your MySQL query statement below
SELECT
	Products.product_name,
	sum( Orders.unit ) AS unit 
FROM
	Products
	INNER JOIN Orders ON Products.product_id = Orders.product_id 
WHERE
	EXTRACT( YEAR_MONTH FROM Orders.order_date ) = 202002 
GROUP BY
	Products.product_name 
HAVING
	unit >= 100