# Write your MySQL query statement below
SELECT
	Employee.employee_id,
	Employee.department_id 
FROM
	Employee 
WHERE
	Employee.primary_flag = 'Y' 
	OR Employee.employee_id IN ( SELECT Employee.employee_id FROM Employee GROUP BY Employee.employee_id HAVING count( Employee.employee_id ) = 1 )


# Write your MySQL query statement below
SELECT
	Employee.employee_id,
CASE
		
		WHEN count( Employee.employee_id ) = 1 THEN
		department_id ELSE max( CASE WHEN Employee.primary_flag = 'Y' THEN department_id ELSE - 1 END ) 
	END AS department_id 
FROM
	Employee 
GROUP BY
	Employee.employee_id