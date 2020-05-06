TARGET = TP1
CC = gcc
CFLAGS = -g -Wall -Werror -pedantic

default: $(TARGET)

$(TARGET): src/global.h src/algoritmos.h src/algoritmos.c src/metodos.h src/metodos.c src/main.c
	$(CC) $(CFLAGS) src/main.c src/algoritmos.h src/global.h src/algoritmos.c src/metodos.h src/metodos.c -lm -o $(TARGET)

clean:

	rm $(TARGET)
