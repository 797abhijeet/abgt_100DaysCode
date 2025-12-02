Update Salary
Set
    sex = Case
        When sex = 'f' Then 'm'
        else 'f'
    end;