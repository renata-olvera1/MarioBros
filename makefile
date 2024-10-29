bin/programa : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/programa 
	
bin/animacion : src/animacion.cpp
	g++ src/animacion.cpp -Iinclude -o bin/animacion 

ejecutar: bin/programa
	./bin/programa

ejecutar2: bin/animacion
	./bin/animacion

clean : bin/programa
	rm bin/programa