all: hello_world input_num

hello_world: main.o print.o
	g++ -o hello_world main.o print.o
main.o: main.cc
	g++ -c main.cc
print.o: print.cc
	g++ -c print.cc
input_num: input_num.o
	g++ -o input_num input_num.o
input_num.o: input_num.cc
	g++ -c input_num.cc
clean:
	rm -rf hello_world input_num main.o print.o  input_num.o
