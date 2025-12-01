-- # Write your MySQL query statement below
Select
    euni.unique_id,
    e.name
From
    Employees e
    Left Join EmployeeUNI euni ON e.id = euni.id;