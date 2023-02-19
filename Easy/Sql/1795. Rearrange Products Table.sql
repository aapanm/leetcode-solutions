# Write your MySQL query statement below
SELECT
	Products.product_id,
	'store1' AS store,
	Products.store1 AS price 
FROM
	Products 
WHERE
	Products.store1 IS NOT NULL UNION
SELECT
	Products.product_id,
	'store2' AS store,
	Products.store2 AS price 
FROM
	Products 
WHERE
	Products.store2 IS NOT NULL UNION
SELECT
	Products.product_id,
	'store3' AS store,
	Products.store3 AS price 
FROM
	Products 
WHERE
	Products.store3 IS NOT NULL