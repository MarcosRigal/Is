DIR_TRAIL=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseSendero
DIR_ROUTE=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseRuta
DIR_SYSTEM=/home/marcos/Repositories/University/Is/P4/GestorDeParques/systemFunctions

all: claseParque.o Clean

claseParque.o: parque.cc parque.h $(DIR_TRAIL)/sendero.h $(DIR_ROUTE)/ruta.h $(DIR_SYSTEM)/systemFunctions.h $(DIR_TRAIL)/sendero.cc $(DIR_ROUTE)/ruta.cc $(DIR_SYSTEM)/systemFunctions.cc
	g++ -c $^

.Phony: Clean
Clean:
	rm *.o