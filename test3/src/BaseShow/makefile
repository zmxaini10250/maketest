SubPWD ?= ../..
SubPWD2 = src/BaseShow

include $(PWD)/$(SubPWD)/include.mk

objects = $(PWD)/$(SubPWD)/$(SubPWD2)/test.o $(PWD)/$(SubPWD)/$(SubPWD2)/BaseShow.o
test: $(objects)
	$(CC) $(OFLAG) test $(objects)

$(PWD)/test.o: $(PWD)/$(SubPWD)/$(SubPWD2)/test.cpp $(PWD)/$(SubPWD)/$(SubPWD2)/BaseShow.h
	$(CC) $(CFLAG) $(PWD)/$(SubPWD)/$(SubPWD2)/test.cpp

$(PWD)/BaseShow.o: $(PWD)/$(SubPWD)/$(SubPWD2)/BaseShow.cpp $(PWD)/$(SubPWD)/$(SubPWD2)/BaseShow.h
	$(CC) $(CFLAG) $(PWD)/$(SubPWD)/$(SubPWD2)/BaseShow.cpp

.PHONY: clean
clean:
	rm test $(objects)

