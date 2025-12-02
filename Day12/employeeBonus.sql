-- Employee
-- empId,name,supervisor,salary
-- Bonus
-- empId,bonus
-- name and bonus if 
-- bonus<1000 or bonus = null
Select
    e.name,
    b.bonus
From
    Bonus b
    Right Join Employee e on e.empId = b.empId
Where
    b.bonus < 1000
    or b.bonus is NUll;