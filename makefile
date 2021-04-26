# if you want to dive into makefiles have a look at:
#	https://makefiletutorial.com/
#	http://www.gnu.org/software/make/manual/make.html

CXX=g++
CPPFLAGS=--std=c++17

DEPS=sudoku.hpp lib/catch.hpp
OBJ=main.o sudoku.o tests.o

all: clean test

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CPPFLAGS)

exercise3: $(OBJ)
	$(CXX) -o $@ $^ $(CPPFLAGS)

test: exercise3
	# executes all tests
	./exercise3

clean:
	rm -f exercise3
