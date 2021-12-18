%Lab: AI_Sat_
%Author: 2019BTCS088
%Topic: CHECK_LIST_IS_SORTED_OR_NOT

is_sorted([]). % Declaring empty list
is_sorted([_]). % Declaring empty list with 'N' size numbers
is_sorted([X,Y|T]):-
	X=<Y,  % Cond: Comparing between X & Y
	is_sorted([Y|T]).

