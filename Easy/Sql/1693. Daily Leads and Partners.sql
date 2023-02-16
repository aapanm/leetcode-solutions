# Write your MySQL query statement below
SELECT
	DailySales.date_id,
	DailySales.make_name,
	count( DISTINCT lead_id ) AS unique_leads,
	count( DISTINCT partner_id ) AS unique_partners 
FROM
	DailySales 
GROUP BY
	DailySales.date_id,
	DailySales.make_name