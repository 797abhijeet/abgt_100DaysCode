-- Activity 
-- player_id device_id event_date games_played
Select
    player_id,
    min(event_date) as first_login
From
    Activity
group by
    player_id
order by
    player_id