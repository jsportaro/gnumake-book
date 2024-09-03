vpath %.c src
vpath %.l src
vpath %.h include
CFLAGS = -Iinclude

count_words: count_words.o counter.o lexer.o -lfl
	gcc $(CFLAGS) $^ -lfl -o $@

count_words.o: count_words.c counter.h
	gcc $(CFLAGS) -c $<

counter.o: counter.c counter.h lexer.h
	gcc $(CFLAGS) -c $<

lexer.o: lexer.c lexer.h
	gcc $(CFLAGS) -c $<

lexer.c: lexer.l
	flex -t $< > $@

.PHONY: clean
clean:
	rm -f *.o lexer.c
