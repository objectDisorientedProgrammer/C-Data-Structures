# MIT License
# 
# Copyright (c) 2016 Douglas Chidester
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

CC=gcc
CFLAGS=-O1 -std=gnu11
L=list/linkedlist.c
Q=queue/queue.c
H=hashmap.c
MAIN=main.c 
APP=ds

.PHONY: all check clean

all: $(MAIN) list/linkedlist.o queue/queue.o
	$(CC) $(CFLAGS) -Ilist/ -Iqueue/ $(MAIN) -o $(APP)

list/linkedlist.o: $L
	$(CC) $(CFLAGS) $L -c

queue/queue.o: $Q
	$(CC) $(CFLAGS) $Q -c

# verify APP was created
check: all
	./$(APP)

# remove APP
clean:
	rm -f $(APP) *.o list/*.o queue/*.o

