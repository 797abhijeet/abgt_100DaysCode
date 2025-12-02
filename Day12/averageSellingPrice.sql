-- Prices
-- product_id, start_date, end_date, price
-- UnitsSold
-- product_id, purchase_date,units
-- Round((sum(us.units*p.price)/sum(us.units)),3)
Select
    p.product_id,
    COALESCE(
        ROUND(SUM(us.units * p.price) / SUM(us.units), 2),
        0
    ) AS average_price
From
    Prices p
    Left Join UnitsSold us on p.product_id = us.product_id
    and (
        us.purchase_date >= start_date
        and us.purchase_date <= end_date
    )
Group by
    product_id