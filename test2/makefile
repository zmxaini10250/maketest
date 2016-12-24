CC = clang++
CFLAG = -c
objects = ./test2/main.o ./test2/src/test.o
show: $(objects)
	$(CC) $(CFLAG) show $(objects)

./test2/main.o: ./test2/main.cpp
	$(CC) $(CFLAG) ./test2/main.cpp

./test2/src/test.o: ./test2/src/test.cpp
	$(CC) $(CFLAG) ./test2/src/test.cpp

.PHONY: clean
clean:
	rm show $(objects)
