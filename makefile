#
# Makefile ESQUELETO
#
# DEVE ter uma regra "all" para geração da biblioteca
# regra "clean" para remover todos os objetos gerados.
#
# NECESSARIO adaptar este esqueleto de makefile para suas necessidades.
#
# 

CC=gcc
LIB_DIR=./lib
INC_DIR=./include
BIN_DIR=./bin
SRC_DIR=./src

all: t2fs libt2fs clean

t2fs:
	gcc -c $(SRC_DIR)/t2fs.c -o $(BIN_DIR)/t2fs.o -Wall

libt2fs:
	ar crs $(LIB_DIR)/libt2fs.a $(BIN_DIR)/t2fs.o $(LIB_DIR)/apidisk.o

clean:
	rm -rf $(BIN_DIR)/*.o $(SRC_DIR)/*~ $(INC_DIR)/*~ *~


