Select
    c.name as Customers
From
    Customers as c
    Left join Orders o on c.id = o.customerId
Where
    o.customerId is NUll