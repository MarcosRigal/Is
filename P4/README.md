![IS](https://upload.wikimedia.org/wikipedia/commons/thumb/9/97/Logo_of_the_United_States_National_Park_Service.svg/1200px-Logo_of_the_United_States_National_Park_Service.svg.png)

# Instrucciones:
El programa está organizado de la siguiente forma:

Cada clase se encuentra en su carpeta correspondiente. Además las clases que contienen test incluyen un Makefile que ejecuta el Autocompiler.sh para crear los ejecutables de los test.

Si se desea ejecutar el AutoCompiler.sh debe asegurarse de haber cambiado previamente las variables:

- GTEST_DIR
- DIR_SYSTEM

Las variables GTEST_DIR se encuentran en los Makefiles de las clases. El nuevo valor debe ser el que corresponda a la ruta en la que se encuentre la carpeta google-release-1.8.1 en su equipo.

 (NOTA: Si ha descargado el repositorio entero se incluye una copia de la misma por ende solo debe actualizar esta parte: /home/--su_ruta--/GestorDeParques/googletest-release-1.8.1/googletest)

La variable DIR_SYSTEM se encuentra en el Makefile principal encargado de compilar system.cc 


 (NOTA: Si ha descargado el repositorio entero solo debe actualizar esta parte: /home/--su_ruta--/GestorDeParques/systemFunctions)

Una vez hecho esto, si ha seguido los pasos correctamente simplemente ejecute los siguientes programas.

(NOTA: AutoCompiler.sh además de compilar las clases ejecuta los test automáticamente)

  
		```
    
		./AutoCompiler.sh
      
        ./GestorDeParques
		
		```
