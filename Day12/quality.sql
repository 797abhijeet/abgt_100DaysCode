-- Queries 
-- query_name, result, position, rating
-- query = rating/position
-- poor_query_percentage = query<3
SELECT
    query_name,
    ROUND(AVG(rating / position), 2) AS quality,
    ROUND(
        SUM(
            CASE
                WHEN rating < 3 THEN 1
                ELSE 0
            END
        ) / COUNT(*) * 100,
        2
    ) AS poor_query_percentage
FROM
    Queries
GROUP BY
    query_name;