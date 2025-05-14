PROG = programa.exe
CC = g++
#Warn All e debug
CPPFLAGS = -Wall -g

#arquivos objetos definidos como pré-requisitos
OBJS = main.o cliente.o conta.o

# Regra principal
all: clean $(PROG)

# Regra clean
clean:
	del /f core $(PROG) $(OBJS)

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

#detalhando os arquivos objeto
main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

cliente.o:
	$(CC) $(CPPFLAGS) -c cliente/cliente.cpp 

conta.o:
	$(CC) $(CPPFLAGS) -c conta/conta.cpp


	