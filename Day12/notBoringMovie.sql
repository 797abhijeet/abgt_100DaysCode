
Select id, movie, description, rating
From Cinema
Where id%2=1 and description !='boring'
Order by rating desc