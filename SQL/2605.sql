select P.name, F.name from Products P,Providers F where 
P.id_categories = 6 and
F.id = P.id_providers;