%Lab: AI_Sat_
%Author: 2019BTCS088
%Topic: CONCATENATING_TWO_LISTS

% When first list => EMPTY & second list => L then final list after concatenation => 'L' list only.
concatenate_list([],L2,L2).

% When the first list != empty, then write this as [Head|Tail], concatenate Tail with L2 recursively, and store into new list in the form, [Head|New List].
concatenate_list([H|T],L2,[H|L3]):-
	concatenate_list(T,L2,L3).
