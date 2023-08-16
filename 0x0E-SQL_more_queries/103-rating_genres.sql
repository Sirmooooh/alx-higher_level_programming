-- Lists all genres in the database hbtn_0d_tvshows_rate by their rating.
-- Records are ordered by descending rating.
SELECT g.name, SUM(r.rate) AS rating
FROM tv_genres g
JOIN tv_show_genres s ON g.id = s.genre_id
JOIN tv_show_ratings r ON s.show_id = r.show_id
GROUP BY g.name
ORDER BY rating DESC;

