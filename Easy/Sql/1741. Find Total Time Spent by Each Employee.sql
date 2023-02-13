SELECT
	Employees.event_day AS DAY,
	Employees.emp_id,
	sum( Employees.out_time - Employees.in_time ) AS total_time 
FROM
	Employees 
GROUP BY
	Employees.event_day,
	Employees.emp_id