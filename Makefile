
all: hello rot128 diamond

hello: hello.c
	gcc -g -pedantic -std=c99 -Wall -Wextra -o hello hello.c
diamond: diamond.c
	gcc -g -pedantic -std=c99 -Wall -Wextra -o diamond diamond.c
rot128: rot128.c
	gcc -g -pedantic -std=c99 -Wall -Wextra -o rot128 rot128.c
clean:
	rm -f hello input output output2 rot128 diamond *.o *~
