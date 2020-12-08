DIR_TRAIL=/home/marcos/Desktop/GestorDeParques/claseSendero
DIR_ROUTE=/home/marcos/Desktop/GestorDeParques/claseRuta
DIR_SYSTEM=/home/marcos/Desktop/GestorDeParques/systemFunctions

all: Parque.o

Parque.o: parque.cc parque.h $(DIR_TRAIL)/sendero.h $(DIR_ROUTE)/ruta.h $(DIR_SYSTEM)/systemFunctions.h $(DIR_TRAIL)/sendero.cc $(DIR_ROUTE)/ruta.cc $(DIR_SYSTEM)/systemFunctions.cc
	g++ -c $^

.Phony: Clean
Clean:
	rm *.o