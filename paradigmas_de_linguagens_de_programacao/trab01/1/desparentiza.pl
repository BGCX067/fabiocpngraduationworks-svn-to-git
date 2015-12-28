desparentiza(Lista, FlatList) :-
	desparentiza(Lista, [], FlatList0), !,
	FlatList = FlatList0.

desparentiza(Var, Tl, [Var|Tl]) :-
	var(Var), !.
desparentiza([], Tl, Tl) :- !.
desparentiza([Hd|Tl], Tail, Lista) :-
	desparentiza(Hd, FlatHeadTail, Lista), 
	desparentiza(Tl, Tail, FlatHeadTail).
desparentiza(Atomo, Tl, [Atomo|Tl]).
