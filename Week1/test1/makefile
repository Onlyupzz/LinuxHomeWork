test1:main.o fun.o fun2.o fun3.o
	gcc main.o fun.o fun2.o fun3.o -o test1
main.o:main.c
	gcc main.c -c
fun.o:fun.c
	gcc fun.c -c
fun2.o:fun2.c
	gcc fun2.c -c
fun3.o:fun3.c
	gcc fun3.c -c
clean:
	rm -f *.o
