% Author: 2019BTCS088
% Lab: SATURDAY ; 27-11-2021
% Example_Usage_Condition_01

% Facts declaration
region('Ram',1900,1950).
region('Mike',1951,1970).
region('John',1971,1985).
region('Ravi',1986,2010).

% Creation of Rule
rulername(X,Y):- region(X,A,B),
	           Y>=A,
		   Y=<B.
ruleryear(X,Y):- region(X,A,B),
	           Y=A.
%ruleryear(X,Y,Z):-region(X,Y,Z).
