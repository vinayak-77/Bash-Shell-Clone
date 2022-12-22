all: ls mkdir cat date rm a.out
ls: ls.c
	gcc -o ls ls.c
mkdir: mkdir.c
	gcc -o mkdir mkdir.c
cat: cat.c
	gcc -o cat cat.c
date: date.c
	gcc -o date date.c
rm: rm.c
	gcc -o rm rm.c
a.out: miniShell.c
	gcc miniShell.c -pthread

clean:
	rm ls rm cat mkdir date a.out


