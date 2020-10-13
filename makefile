all: numberTheoryTools

numberTheoryTools: funcsForMain.o numTools.o main.o
	g++ -std=c++11 -o numberTheoryTools funcsForMain.o numTools.o main.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp
	
funcsForMain.o: funcsForMain.hpp funcsForMain.cpp
	g++ -std=c++11 -c funcsForMain.cpp

numTools.o: numTools.hpp numTools.cpp
	g++ -std=c++11 -c numTools.cpp

clean:
	rm *.o numberTheoryTools
