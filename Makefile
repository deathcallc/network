MODEL_SPARSE_PATH = ./Model/SparseMatri
SERVICE_PATH = ./Service
CFG_PATH = ./Cfg

VPATH = $(MODEL_SPARSE_PATH):$(SERVICE_PATH)
OBJ = test.o SparseMatriOpt.o DateInput.o

test : $(OBJ)
	g++ $(OBJ) -o test

test.o : test.cpp
	g++ -c test.cpp

DateInput.o : SparseMatriOpt.h SparseMatriOpt.cpp DateInput.cpp DateInput.h
	g++ -c $(SERVICE_PATH)/DateInput.cpp

SparseMatriOpt.o : SparseMatriOpt.cpp SparseMatriOpt.h
	g++ -c $(MODEL_SPARSE_PATH)/SparseMatriOpt.cpp

.PHONY : clean
clean :
	-rm test $(OBJ)
