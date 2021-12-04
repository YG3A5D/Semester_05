/* Program to alter the given Statement*/


change(you,[i,am]).
change(are,not).
change(X,X,X).

/*RULES*/
alter([],[],[]).
alter([H|T],[P|Q]):-
	change(H,P),
	alter(T,Q).

