-- Courses
-- student, class 
Select
    class
from
    Courses
group by
    class
having
    count(class) > 4