eshop.exe: zbozi.o boty.o tricko.o kosik.o program.o
	g++ zbozi.o boty.o tricko.o kosik.o program.o -o eshop.exe

program.o: program.cpp boty.o tricko.o zbozi.o
	g++ program.cpp -c

boty.o: boty.cpp boty.h zbozi.o
	g++ boty.cpp -c

tricko.o: tricko.cpp tricko.h zbozi.o
	g++ tricko.cpp -c

zbozi.o: zbozi.cpp zbozi.h
	g++ zbozi.cpp -c
