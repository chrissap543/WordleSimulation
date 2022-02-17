CXX =clang++
INCLUDES=-Iincludes/
CXX_FLAGS = -std=c++20

exec: build/main.o build/fileio.o
	$(CXX) -o $@ $^
build/main.o: src/main.cpp
	$(CXX) $(CXX_FLAGS) $(INCLUDES) -c $^ -o $@
build/fileio.o: src/fileio.cpp
	$(CXX) $(CXX_FLAGS) $(INCLUDES) -c $^ -o $@

clean:
	rm -fr exec
	rm -fr build/*.o

.DEFAULT: exec
.PHONY: clean