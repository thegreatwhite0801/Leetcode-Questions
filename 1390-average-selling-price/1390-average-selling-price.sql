SELECT p.product_id "product_id", ROUND(sum(p.price * u.units)/sum(u.units),2) "average_price"
FROM prices p
JOIN unitsSold u ON (p.product_id = u.product_id AND u.purchase_date >= p.start_date AND u.purchase_date <= p.end_date)
GROUP BY p.product_id;
