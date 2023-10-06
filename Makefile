all:
	gcc -Wall -Werror -Wextra ~/T09D15-1/src/main_executable_module/*.c > ~/T09D15-1/build/Quest_3

clean:
	rm -rf ~/T09D15-1/build/Quest_3 ./a.out

rebuild:
	make -f ~/T09D15-1/src/main_executable_module/Makefile clean
	make -f ~/T09D15-1/src/main_executable_module/Makefile all
