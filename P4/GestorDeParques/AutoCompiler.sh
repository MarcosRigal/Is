#!/bin/bash
cd claseAdministrativo
make
./test_administrativo
cd ..
cd claseRuta
make
./test_ruta
cd ..
cd claseMonitor
make
./test_monitor
cd ..
cd systemFunctions
make
./test_systemFunctions
cd ..
make