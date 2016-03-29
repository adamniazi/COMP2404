OBJ = main.o BrigManager.o Brig.o Cell.o Pirate.o UImanager.o random.o CArray.o PArray.o Storage.o 

assign2:	$(OBJ)
	g++ -o assign2 $(OBJ)

main.o:	main.cc
	g++ -c main.cc

BrigManager.o:	BrigManager.cc BrigManager.h 
	g++ -c BrigManager.cc

UImanager.o:	UImanager.cc UImanager.h 
	g++ -c UImanager.cc

Cell.o:	Cell.cc Cell.h defs.h
	g++ -c Cell.cc

Storage.o:	Storage.cc Storage.h Brig.h CArray.h
	g++ -c Storage.cc

Brig.o:	Brig.cc Brig.h defs.h
	g++ -c Brig.cc

Pirate.o:	Pirate.cc Pirate.h
	g++ -c Pirate.cc

PArray.o:	PArray.cc PArray.h
	g++ -c PArray.cc

CArray.o:	CArray.cc CArray.h
	g++ -c CArray.cc

random.o:	random.cc
	g++ -c random.cc

clean:
	rm -f *.o a1

