.PHONY: run
run: test_const_ptr
	./test_const_ptr

test_const_ptr: test_const_ptr.cpp
	g++ -o test_const_ptr test_const_ptr.cpp -Wall

clean:
	rm -f ./a.out
	rm *.o

