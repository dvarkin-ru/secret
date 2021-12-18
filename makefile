all: alpha dealpha

alpha:
	gcc alpha.c -o alpha

dealpha:
	gcc dealpha.c -o dealpha

clean:
	rm alpha dealpha
