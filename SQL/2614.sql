SELECT C.NAME, R.RENTALS_DATE
FROM CUSTOMERS C JOIN RENTALS R ON C.ID = R.ID_CUSTOMERS
WHERE R.RENTALS_DATE >= '2016-09-01' AND R.RENTALS_DATE <= '2016-09-30';