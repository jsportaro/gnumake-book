VPATH = src
CFLAGS = -Iinclude

count_words: count_words.o counter.o lexer.o -lfl
	gcc $(CFLAGS) $^ -lfl -o $@

count_words.o: count_words.c include/counter.h
	gcc $(CFLAGS) -c $<

counter.o: counter.c include/counter.h include/lexer.h
	gcc $(CFLAGS) -c $<

lexer.o: lexer.c include/lexer.h
	gcc $(CFLAGS) -c $<

lexer.c: lexer.l
	flex -t $< > $@

.PHONY: clean
clean:
	rm -f *.o lexer.c
