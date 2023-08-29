SELECT p.project_id "project_id",
       ROUND(SUM(e.experience_years) / COUNT(e.experience_years), 2) "average_years"
FROM project p
JOIN employee e ON (p.employee_id = e.employee_id)
GROUP BY p.project_id;

