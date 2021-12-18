%Lab: AI_Sat_
%Author: 2019BTCS088
%Topic: RECURSIVE_SEARCHING_IN_PROLOG_USING_LIST

powerful_leaders(X,[X|_]).
powerful_leaders(X,[_|Y]):-
	powerful_leaders(X,Y).
