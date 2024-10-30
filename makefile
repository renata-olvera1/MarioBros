bin/programa : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/programa 
	
bin/animacion : src/animacion.cpp
	g++ src/animacion.cpp -Iinclude -o bin/animacion -lftxui-screen -lftxui-dom -lftxui-component -std=c++2a

bin/prueba : src/prueba.cpp
	g++ src/prueba.cpp -Iinclude -o bin/prueba -lftxui-screen -lftxui-dom -lftxui-component -std=c++2a

ejecutar: bin/programa
	./bin/programa

ejecutar2: bin/animacion
	./bin/animacion

ejecutar3: bin/prueba
	./bin/prueba

clean : bin/programa
	rm bin/programa