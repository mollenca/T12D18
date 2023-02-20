all: print_module documentation_module

rebuild: clean all

print_module: main_module_entry_point.c print_module.c
	gcc -Wall -Werror -Wextra -o ../build/Quest_1 main_module_entry_point.c print_module.c -D print_module

documentation_module: main_module_entry_point.c documentation_module.c
	gcc -Wall -Werror -Wextra -o ../build/Quest_2 main_module_entry_point.c documentation_module.c -D documentation_module

check:
	python3 ../materials/linters/cpplint.py --extensions=c *c
	cppcheck --check-config --enable=all --suppress=missingIncludeSystem ./

clean:
	rm -f *.o
	rm ../build/Quest_*