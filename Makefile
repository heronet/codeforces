# Makefile to compile and run C++ files
# Usage: make run FILE=filename.cpp

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Default target
.PHONY: help
help:
	@echo "Usage: make run FILE=filename.cpp"
	@echo "       make compile FILE=filename.cpp"
	@echo "       make clean"

# Check if FILE is provided
check-file:
ifndef FILE
	$(error FILE is not set. Usage: make run FILE=filename.cpp)
endif

# Extract filename without extension
EXECUTABLE = .exec

# Compile the C++ file
.PHONY: compile
compile: check-file
	$(CXX) $(CXXFLAGS) $(FILE) -o $(EXECUTABLE)
	@echo "Compiled $(FILE) to $(EXECUTABLE)"

# Compile and run the C++ file
.PHONY: run
run: compile
	@echo "Running $(EXECUTABLE)..."
	@echo "----------------------------------------"
	./$(EXECUTABLE)
	@echo "----------------------------------------"

# Clean up executables
.PHONY: clean
clean:
	@echo "Cleaning up executables..."
	@find . -type f -executable -not -name "Makefile" -not -name "*.sh" -delete
	@echo "Clean complete"

# Alternative target that cleans before running
.PHONY: fresh
fresh: clean run
