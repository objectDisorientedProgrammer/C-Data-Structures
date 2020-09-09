CC=gcc
WVTESTDIR=../wvtest/
OUT=suite

tests_queue.o: tests_queue.c
	$(CC) -DWVTEST_CONFIGURED -I$(WVTESTDIR) -I. tests_queue.c -c

queue: queue.c
	$(CC) queue.c -I. -c

test: queue.o tests_queue.o $(WVTESTDIR)wvtestmain.c $(WVTESTDIR)wvtest.c
	$(CC) -DWVTEST_CONFIGURED tests_queue.o queue.o $(WVTESTDIR)wvtestmain.c $(WVTESTDIR)wvtest.c -I. -I$(WVTESTDIR) -o $(OUT)
	./$(WVTESTDIR)wvtestrun ./$(OUT)

clean:
	rm -f tests_queue.o queue.o $(OUT)
