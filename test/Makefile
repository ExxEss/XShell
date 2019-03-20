.PHONY: run
run: test_fork
	./test_fork

test_fork: test_fork.cpp
	g++ -o test_fork test_fork.cpp -Wall

clean:
	rm -f ./a.out
	rm *.o

