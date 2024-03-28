SELECT 
    co.name AS country_name,
    ci.name AS city_name,
    cu.name AS customer_name
FROM 
    Countries co
LEFT JOIN 
    Cities ci ON co.id = ci.country_id
LEFT JOIN 
    Customers cu ON ci.id = cu.city_id
ORDER BY 
    co.name;

SELECT 
    co.name AS country_name,
    ci.name AS city_name,
    cu.name AS customer_name
FROM 
    Countries co
LEFT JOIN 
    Cities ci ON co.id = ci.country_id
LEFT JOIN 
    Customers cu ON ci.id = cu.city_id
WHERE 
    ci.id IS NOT NULL
UNION
SELECT 
    co.name AS country_name,
    NULL AS city_name,
    NULL AS customer_name
FROM 
    Countries co
LEFT JOIN 
    Cities ci ON co.id = ci.country_id
WHERE 
    ci.id IS NULL;
