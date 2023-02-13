# Write your MySQL query statement below
SELECT
	Products.product_id 
FROM
	Products 
WHERE
	Products.low_fats = 'Y' 
	AND Products.recyclable = 'Y'