all:
	@echo "check makefile"

one: print_1
	./print
two: print_2
	./print

print_1: main.c
	@gcc main.c -o print -D__ONE__

print_2: main.c
	@gcc main.c -o print

build_shared:
	gcc -shared print_something_1.c -o libprint_1
	gcc -shared print_something_2.c -o libprint_2

clean:
	rm -rf libprint_1 libprint_2 print