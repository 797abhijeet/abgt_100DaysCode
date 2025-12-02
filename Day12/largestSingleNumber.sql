-- MyNumbers
-- num
-- largest single number 
Select
    (
        Select
            num
        from
            MyNumbers
        group By
            num
        Having
            count(num) = 1
        Order by
            num desc
        limit
            1
    ) as num