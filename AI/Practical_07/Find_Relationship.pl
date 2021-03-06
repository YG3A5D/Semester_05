/* Program to find Relationship*/

/*Facts*/
parent(pam,bob).
parent(tom,bob).
parent(tom,liz).
parent(bob,ann).
parent(bob,pat).
parent(pat,jim).

male(tom).
male(bob).
male(pat).
male(jim).

female(pam).
female(liz).
female(ann).

/*RULES*/
sister(X,Y):-parent(X,Y),parent(Y,Z),female(X).
mother(X,Y):-female(X),parent(X,Y).
offspring(Y,X):-parent(X,Y).
grandparent(X,Z):-parent(X,Y),parent(Y,Z).
predecessor(X,Y):-parent(X,Y).
predecessor(X,Z):-parent(X,Y),predecessor(Y,Z).

