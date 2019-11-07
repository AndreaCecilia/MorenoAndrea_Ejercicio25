Ejecutar: clase.x
	./clase.x
clase.x : clase25.cpp
	c++ clase25.cpp -o clase.x
clean :
	rm -r clase.x 
	