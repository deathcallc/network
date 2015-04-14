MODEL_SPARSE_PATH = ./Model/SparseMatri
SERVICE_PATH = ./Service
CFG_PATH = ./Cfg
ENTITY_PATH = ./Entity

VPATH = $(MODEL_SPARSE_PATH):$(SERVICE_PATH):$(ENTITY_PATH)
OBJ = test.o SparseMatriOpt.o DateInput.o PaperReader.o Paper.o Author.o

test : $(OBJ)
	g++ $(OBJ) -o test

test.o : test.cpp
	g++ -c test.cpp

DateInput.o : SparseMatriOpt.h SparseMatriOpt.cpp DateInput.cpp DateInput.h
	g++ -c $(SERVICE_PATH)/DateInput.cpp

SparseMatriOpt.o : SparseMatriOpt.cpp SparseMatriOpt.h
	g++ -c $(MODEL_SPARSE_PATH)/SparseMatriOpt.cpp

PaperReader.o : PaperReader.cpp PaperReader.h PaperTemplate.h
	g++ -c $(SERVICE_PATH)/PaperReader.cpp

Paper.o : Paper.cpp
	g++ -c $(ENTITY_PATH)/Paper.cpp

Author.o : Author.cpp
	g++ -c $(ENTITY_PATH)/Author.cpp

.PHONY : clean
clean :
	-rm test $(OBJ)
