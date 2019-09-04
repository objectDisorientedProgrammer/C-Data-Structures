CC=gcc
WVTESTDIR=../wvtest/
OUT=suite

tests_linkedlist.o: tests_linkedlist.c
	$(CC) -DWVTEST_CONFIGURED -I../wvtest/ -I. tests_linkedlist.c -c

list: linkedlist.c
	$(CC) linkedlist.c -I. -c

test: linkedlist.o tests_linkedlist.o $(WVTESTDIR)wvtestmain.c $(WVTESTDIR)wvtest.c
	$(CC) -DWVTEST_CONFIGURED tests_linkedlist.o linkedlist.o $(WVTESTDIR)wvtestmain.c $(WVTESTDIR)wvtest.c -I. -I$(WVTESTDIR) -o $(OUT)
	./$(WVTESTDIR)wvtestrun ./$(OUT)

clean:
	rm -f tests_linkedlist.o linkedlist.o $(OUT)
