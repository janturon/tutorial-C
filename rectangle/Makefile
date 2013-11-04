# rules for assembling the program

program.exe: rectangle.o program.o
	g++ program.o rectangle.o -s -o program.exe

rectangle.o: rectangle.cpp
	g++ rectangle.cpp -c

program.o: rectangle.cpp
	g++ program.cpp -c