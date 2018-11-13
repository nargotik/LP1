CC=gcc
CFLAGS=-I.
# Define as dependencias
DEPS = $(wildcard src/*.h)
# Define os ficheiros c a incluir
OBJ = $(wildcard src/*.c)


%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)



all:
	@echo Unknown command please use:
	@echo make build
	@echo make clean
	@echo make run
build: $(OBJ)
	$(CC) -o bin/$@ $^ $(CFLAGS)
	@echo $@
run:
	@./bin/build
	@echo 
clean:
	rm bin/build
