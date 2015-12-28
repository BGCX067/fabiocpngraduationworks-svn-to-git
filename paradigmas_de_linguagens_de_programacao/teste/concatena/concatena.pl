concatena([],L,L).
concatena([H|T],L2,[H|L3]):-concatena(T,L2,L3).