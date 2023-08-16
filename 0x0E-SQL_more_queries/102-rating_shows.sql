-- Lists all shows from hbtn_0d_tvshows_rate by their rating.
-- Records are ordered by descending rating.
SELECT CONCAT(tv_shows.title, ' - ', SUM(tv_show_ratings.rating)) AS 'tv_show_rating'
FROM tv_shows
LEFT JOIN tv_show_ratings ON tv_shows.id = tv_show_ratings.tv_show_id
GROUP BY tv_shows.title
ORDER BY SUM(tv_show_ratings.rating) DESC;

