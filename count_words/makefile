count_words: count_words.o lexer.o -lfl
	gcc $^ -lfl -o $@

count_words.o: count_words.c
	gcc -c $<

lexer.o: lexer.c
	gcc -c $<

lexer.c: lexer.l
	flex -t $< > $@

.PHONY: clean
clean:
	rm -f *.o lexer.c
