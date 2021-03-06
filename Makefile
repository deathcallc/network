MODEL_SPARSE_PATH = ./Model/SparseMatri
SERVICE_PATH = ./Service
CFG_PATH = ./Cfg
ENTITY_PATH = ./Entity

VPATH = $(MODEL_SPARSE_PATH):$(SERVICE_PATH):$(ENTITY_PATH)
OBJ = test.o SparseMatriOpt.o DateInput.o PaperReader.o Paper.o Author.o \
AuthorReader.o Pretreatment.o

test : $(OBJ)
	g++ $(OBJ) -o test

test.o : test.cpp
	g++ -c test.cpp

Pretreatment.o : Pretreatment.cpp
	g++ -c Pretreatment.cpp

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

AuthorReader.o : AuthorReader.cpp AuthorReader.h AuthorTemplate.h
	g++ -c $(SERVICE_PATH)/AuthorReader.cpp

.PHONY : clean
clean :
	-rm test $(OBJ) 2> /dev/null
