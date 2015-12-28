reverA([H|T],A,R):-reverA(T,[H|A],R).
reverA([],A,A).

reverte(L,R):-reverA(L,[],R).