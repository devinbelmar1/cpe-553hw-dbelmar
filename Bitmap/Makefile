# to comment out debugging put # before -g
DEBUG	:=	-g
CXX	:=	g++ $(DEBUG)

bitmap: main.o Bitmap.o:
	$(CXX) main.o Bitmap.o -o bitmap

main.o: Bitmap.hh main.cc
	$(CXX) -c main.cc

Bitmap.o: Bitmap.hh Bitmap.cc
	$(CXX) -c Bitmap.cc
