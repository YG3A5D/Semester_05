go:-write('Welcome, to Prolog Lab'),nl,
	write('-------------------'),nl,
	write('This is program about Comparing two numbers'),nl,
	write('Please provide value of X:'),
	read(X),nl,
	write('Please provide value of Y:'),
	read(Y),nl,
	write(X),nl,
	compare(X,Y).

	compare(X,Y):-X>Y,write(X,'is bigger than',Y);
	              Y>X,write(Y,'is bigger than',X).


gos:-write('Enter your name'),nl,
        read(X),nl,
	write('Hello'; X).
