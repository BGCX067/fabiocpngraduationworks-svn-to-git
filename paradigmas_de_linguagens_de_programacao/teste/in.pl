%inside(outside, inside).
inside(katarina,olga).
inside(olga,natsha).
inside(natsha,irina).

in(X,Y)  :- inside(X,Y).
in(X,Y) :- inside(X,Z), in(Z,Y).