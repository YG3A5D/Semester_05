% Practical_Lab_01 --> for Input & Output
position("Neha","Faculty").
position('Rishi','Student').

find_position:-
	write('-: Good Evening, Welcome to Prolog Lab :-'),nl,
	write('-----------------------------------------'),nl,nl,
	write('Whose position do you wish to know'),nl,
	read(Input),nl,
	position(Input,Output),nl,
	write(Output).


% Practical_Lab_02 --> For operator precedence
X = 3 + 3.
X is 3 + 3.
X is 3 / 3.
X is 3 * 3.
X is max(3,5).
X is min(3,5).
X is sqrt(3).
6=:=6.
X is mod(1,2,3).
6=:=6 % For equal to
6=/=6 % For not equal to
X is 3 mod 3.
X is 5//2.






