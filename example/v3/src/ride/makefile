# $@--目标文件$^--所有的依赖文件$<--第一个依赖文件

sources:=$(wildcard *.cpp)
objects:=$(sources:.cpp=.o)
dependence:=$(sources:.cpp=.d)

all: $(objects)
	
	$(CXX) $^ -o $@

%.o: %.c
	$(CXX) -c $< -o $@

include $(dependence)

# set -e; rm -f $@; \

%.d: %.cpp
	$(CXX) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ :,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

.PHONY: clean
clean:
	rm -f all $(objects) $(dependence)

