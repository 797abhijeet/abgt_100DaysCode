-- Write your MySQL query statement below
Select Distinct email as Email From PersonGroup By email Having count(email) >1F
