OBJ = main.o BrigManager.o Brig.o Cell.o Pirate.o UImanager.o random.o CArray.o Queue.o 

assign3:	$(OBJ)
	g++ -o assign3 $(OBJ)

main.o:	main.cc
	g++ -c main.cc

BrigManager.o:	BrigManager.cc BrigManager.h 
	g++ -c BrigManager.cc

UImanager.o:	UImanager.cc UImanager.h 
	g++ -c UImanager.cc

Cell.o:	Cell.cc Cell.h  Queue.h defs.h
	g++ -c Cell.cc

Storage.o:	Queue.cc Queue.h Pirate.h defs.h
	g++ -c Queue.cc

Brig.o:	Brig.cc Brig.h defs.h
	g++ -c Brig.cc

Pirate.o:	Pirate.cc Pirate.h
	g++ -c Pirate.cc

CArray.o:	CArray.cc CArray.h
	g++ -c CArray.cc

random.o:	random.cc
	g++ -c random.cc

clean:
	rm -f *.o a1

