COMPILER = g++
COMPILER_FLAGS = -Wall -Wextra -Werror -Wpedantic --pedantic-error -ggdb -O0 -Iinclude

SOURCE_FILES = src/main.cpp src/calc.cpp
OBJECT_FILES = $(SOURCE_FILES:.cpp=.o)

EXEC = calc

all: $(EXEC)

# Linking
$(EXEC): $(OBJECT_FILES)
	$(COMPILER) -o $@ $^

# Compiling
%.o: %.cpp 
	$(COMPILER) $(COMPILER_FLAGS) -c -o $@ $^

clean: 
	rm $(EXEC) $(OBJECT_FILES)
	
