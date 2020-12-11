DIR_PARK=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseParque
DIR_EXCURSIONIST=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseSenderista
DIR_ADMINISTRATOR=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseAdministrativo
DIR_MONITOR=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseMonitor
DIR_TRABAJADOR=/home/marcos/Repositories/University/Is/P4/GestorDeParques/claseTrabajador
DIR_PERSONA=/home/marcos/Repositories/University/Is/P4/GestorDeParques/clasePersona
DIR_SYSTEM=/home/marcos/Repositories/University/Is/P4/GestorDeParques/systemFunctions

all: GestorDeParques

GestorDeParques: system.cc $(DIR_SYSTEM)/systemFunctions.h $(DIR_SYSTEM)/systemFunctions.cc $(DIR_PARK)/parque.h $(DIR_PARK)/parque.cc $(DIR_EXCURSIONIST)/senderista.h $(DIR_EXCURSIONIST)/senderista.cc $(DIR_ADMINISTRATOR)/administrativo.h $(DIR_ADMINISTRATOR)/administrativo.cc $(DIR_MONITOR)/monitor.h $(DIR_MONITOR)/monitor.cc $(DIR_TRABAJADOR)/trabajador.h $(DIR_TRABAJADOR)/trabajador.cc $(DIR_PERSONA)/persona.h $(DIR_PERSONA)/persona.cc
	g++ $^ -o GestorDeParques

.Phony: Clean
Clean:
	rm *.o