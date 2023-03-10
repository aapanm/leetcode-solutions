# Write your MySQL query statement below
SELECT
	Department.id,
	sum(
	IF
	( Department.MONTH = 'Jan', Department.revenue, NULL )) AS Jan_Revenue,
	sum(
	IF
	( Department.MONTH = 'Feb', Department.revenue, NULL )) AS Feb_Revenue,
	sum(
	IF
	( Department.MONTH = 'Mar', Department.revenue, NULL )) AS Mar_Revenue,
	sum(
	IF
	( Department.MONTH = 'Apr', Department.revenue, NULL )) AS Apr_Revenue,
	sum(
	IF
	( Department.MONTH = 'May', Department.revenue, NULL )) AS May_Revenue,
	sum(
	IF
	( Department.MONTH = 'Jun', Department.revenue, NULL )) AS Jun_Revenue,
	sum(
	IF
	( Department.MONTH = 'Jul', Department.revenue, NULL )) AS Jul_Revenue,
	sum(
	IF
	( Department.MONTH = 'Aug', Department.revenue, NULL )) AS Aug_Revenue,
	sum(
	IF
	( Department.MONTH = 'Sep', Department.revenue, NULL )) AS Sep_Revenue,
	sum(
	IF
	( Department.MONTH = 'Oct', Department.revenue, NULL )) AS Oct_Revenue,
	sum(
	IF
	( Department.MONTH = 'Nov', Department.revenue, NULL )) AS Nov_Revenue,
	sum(
	IF
	( Department.MONTH = 'Dec', Department.revenue, NULL )) AS Dec_Revenue 
FROM
	Department 
GROUP BY
	Department.id 
ORDER BY
	Department.id ASC;