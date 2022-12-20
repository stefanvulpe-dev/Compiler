all: clean
	flex my_language.l 
	mv -f ./lex.yy.c ./headers/lex.yy.c
	bison -d my_language.y -o ./headers/my_language.tab.c
	gcc ./headers/lex.yy.c ./headers/my_language.tab.c -lm -o parserd_program
clean: 
	rm -rf parserd_program ./headers/my_language.tab.c ./headers/my_language.tab.h ./headers/lex.yy.c
run: all 
	./parserd_program program.txt symbol_table.txt symbol_table_functions.txt
git: 
	git add .
	git commit -m "$m"
	git push