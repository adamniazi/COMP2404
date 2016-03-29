OBJ = main.o BrigManager.o Brig.o Cell.o Pirate.o UImanager.o random.o CArray.o Borc.o Dorc.o Porc.o

a1:	$(OBJ)
	g++ -o a5 $(OBJ)

main.o:	main.cc
	g++ -c main.cc

BrigManager.o:	BrigManager.cc BrigManager.h 
	g++ -c BrigManager.cc

UImanager.o:	UImanager.cc UImanager.h PArray.h
	g++ -c UImanager.cc

Cell.o:	Cell.cc Cell.h defs.h PArray.h
	g++ -c Cell.cc 

Brig.o:	Brig.cc Brig.h defs.h
	g++ -g -c Brig.cc

Pirate.o:	Pirate.cc Pirate.h
	g++ -c Pirate.cc

#PArray.o:	PArray.cc PArray.h
#	g++ -c PArray.cc

CArray.o:	CArray.cc CArray.h
	g++ -c CArray.cc

Dorc.o:	Dorc.cc Dorc.h Pirate.h
	g++ -c Dorc.cc

Borc.o:	Borc.cc Borc.h Pirate.h
	g++ -c Borc.cc

Porc.o:	Porc.cc Porc.h Pirate.h
	g++ -c Porc.cc

random.o:	random.cc
	g++ -c random.cc

clean:
	rm -f *.o a5

