% Author: 2019BTCS088
% Lab: SATURDAY ; 27-11-2021
% Example_Density_Calculation_02

% Declaring Facts
population('China',100).
population('India',85).
population('USA',40).
population('Pakistan',9).

% Declaring Facts
area('China',10).
area('India',4).
area('USA',12).
area('Pakistan',2).

density(X,Y):-population(X,Pop),
              area(X,Ar),
	      Y is Pop/Ar.
