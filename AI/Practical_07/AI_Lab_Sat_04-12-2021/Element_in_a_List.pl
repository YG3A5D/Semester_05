/*Check whether a given element*/

/*RULES*/
member(X,[X|_]).
member(X,[_|Y]):-
	member(X,Y).
