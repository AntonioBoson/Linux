# Compiler
CC = @gcc
# Compiler flags
CFLAGS = -c -Wall
# Executable file
EXECUTABLE = ListaEncadeadaSimplesComCabeca

# Command: make
all: $(EXECUTABLE)

# Target "$(EXECUTABLE)" will make the final executable file.
$(EXECUTABLE): main.o linkedListWithHead.o
	@echo Gerando executável 
	$(CC) linkedListWithHead.o main.o -o $(EXECUTABLE)

# Rule to make target "main.o".
main.o:	
	@echo Compilando main.c 
	$(CC) $(CFLAGS) ../Codes/main.c

# Rule to make target "linkedListWithHead.o".
linkedListWithHead.o:	
	@echo Compilando linkedListWithHead.c 
	$(CC) $(CFLAGS) ../Codes/linkedListWithHead.c

# Command: make clean
clean:
	@echo Deletando arquivos de build
	@rm *.o ListaEncadeadaSimplesComCabeca