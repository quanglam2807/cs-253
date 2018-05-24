# Parameters to control Makefile operation
PROJECT=exercise8
CC=g++
CFLAGS=-c -Wall -std=c++14
LDFLAGS=
SRC_DIR=src
TEST_DIR=test
BUILD_DIR=build
SOURCES=$(SRC_DIR)/$(PROJECT)_main.cpp $(SRC_DIR)/$(PROJECT).cpp $(SRC_DIR)/Book.cpp $(SRC_DIR)/College.cpp $(SRC_DIR)/Company.cpp $(SRC_DIR)/Customer.cpp $(SRC_DIR)/Employee.cpp $(SRC_DIR)/Game.cpp $(SRC_DIR)/Laptop.cpp $(SRC_DIR)/Room.cpp $(SRC_DIR)/Roster.cpp $(SRC_DIR)/Song.cpp $(SRC_DIR)/Student.cpp
OBJECTS=$(SOURCES:.cpp=.o)

# Default
all: main test_exec

# Make (link) an executable
main: $(SOURCES) $(PROJECT)

# Make (link) an executable
# Must have objects
$(PROJECT): $(OBJECTS)
	mkdir -p $(BUILD_DIR)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(BUILD_DIR)/$@.out

# Make (compile) an object
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

# Remove object files and the executable
clean: test_clean
	rm -f $(SRC_DIR)/*.o $(BUILD_DIR)/$(PROJECT).out

# Run the executable
run:
	./$(BUILD_DIR)/$(PROJECT).out

# Make (link) the test file
test_exec:
	make -C $(TEST_DIR)

# Remove object files and the executable from the test directory
test_clean:
	make -C $(TEST_DIR) clean

# Run test
test_run:
	make -C $(TEST_DIR) run

# Don't display instructions while running
.SILENT: run