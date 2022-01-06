select P.id,P.name
from products P join categories C on P.ID_CATEGORIES=C.ID
where C.name like 'super%';