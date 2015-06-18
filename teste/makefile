CC=gcc
LIB_DIR=../lib
INC_DIR=../include
BIN_DIR=../bin
SRC_DIR=../src
TST_DIR=.


all: teste teste_identify2 clean

teste:
	gcc -o $(BIN_DIR)/teste $(TST_DIR)/teste.c -L$(LIB_DIR) -lt2fs -Wall

teste_identify2:
	gcc -o $(BIN_DIR)/teste_identify2 $(TST_DIR)/teste_identify2.c -L$(LIB_DIR) -lt2fs -Wall	

clean: 
	rm -rf $(BIN_DIR)/*.o $(SRC_DIR)/*~ $(INC_DIR)/*~ $(TST_DIR)/*~ *~
