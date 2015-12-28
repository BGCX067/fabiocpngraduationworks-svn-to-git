directTrain(forbach,saarbruecken).
directTrain(freyming,forbach).
directTrain(fahlquemont,stAvold).
directTrain(stAvold, forbach).
directTrain(saarbruecken,dudweiler).
directTrain(metz,fahlquemont).
directTrain(nancy,metz).

travelBetween(X,Y) :- directTrain(X,Y).
travelBetween(X,Y) :- directTrain(X,Z), travelBetween(Z,Y).
%travelBetween(X,Y) :- travelBetween(Y,X).

%travelBetween(Y,X) :- directTrain(X,Y).
%travelBetween(Y,X) :- directTrain(X,Z), travelBetween(Z,Y).
