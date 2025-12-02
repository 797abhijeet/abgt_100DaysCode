-- Triangle 
-- x,y,z
Select
    x,
    y,
    z,
    Case
        When (
            x + y > z
            and y + z > x
            and z + x > y
        ) then 'Yes'
        else 'No'
    End as triangle
from
    Triangle