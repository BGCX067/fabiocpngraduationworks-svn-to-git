carnivoro(c1).
carnivoro(c2).
herbivoro(h1).
mamifero(X):-carnivoro(X);herbivoro(X).
passaro(p1).
passaro(p2).
reptil(r1).
terrestre(X):-mamifero(X);passaro(X);reptil(X).
aquatico(a1).
aquatico(a2).
animal(X):-aquatico(X);terrestre(X).

