frac: Fraction.o hwMain.o
	g++  Fraction.o hwMain.o -o frac

Fraction.o: Fraction.hh Fraction.cc
	g++ -c Fraction.cc

hwMain.o: hwMain.cc Fraction.hh
	g++ -c hwMain.cc
