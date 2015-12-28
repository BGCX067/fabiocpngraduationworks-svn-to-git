tran(eins,one).
tran(zwei,two).
tran(drei,three).
tran(vier,four).
tran(fuenf,five).
tran(sechs,six).
tran(sieben,seven).
tran(acht,eight).
tran(neum,nine).

listtran([],[]).
listtran([AH|AT],[EH|ET]):- tran(AH,EH), listtran(AT,ET). 