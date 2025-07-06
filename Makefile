# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I.

# Google Test libraries
GTEST_LIBS = -lgtest -lgtest_main -pthread

# Source files
SRC = BankAccount.cpp BankSystem.cpp
MAIN = Bankmain.cpp
TESTS = accountTest.cpp SystemTest.cpp

# Output binaries
APP = bankapp
TEST_BIN = banktests

.PHONY: all run test clean

all: $(APP) $(TEST_BIN)

# Build the main app
$(APP): $(SRC) $(MAIN)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Build the tests
$(TEST_BIN): $(SRC) $(TESTS)
	$(CXX) $(CXXFLAGS) $^ -o $@ $(GTEST_LIBS)

# Run the application
run: $(APP)
	./$(APP)

# Run the tests
test: $(TEST_BIN)
	./$(TEST_BIN)

# Remove binaries and object files
clean:
	rm -f $(APP) $(TEST_BIN) *.o

