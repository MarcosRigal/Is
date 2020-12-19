DIR_SYSTEM=/home/marcos/Repositories/University/Is/P4/GestorDeParques/systemFunctions

all: GestorDeParques

GestorDeParques: system.cc $(DIR_SYSTEM)/systemFunctions.h $(DIR_SYSTEM)/systemFunctions.cc
	g++ $^ -o GestorDeParques

.Phony: Clean
Clean:
	rm *.o