.PHONY: default force

SYSNAME=$(shell uname -s)
ifeq ($(SYSNAME),Darwin)
		ECHO=echo
else
		ECHO=echo -e
endif

CXX = g++
CFLAGS = -pg -Wall -std=c++0x

PROGRAM_NAME=AS
PROGRAM_NAME_CN=gtest测试模块

# TODO: 这里加入所有默认需要编译的目标
TARGETS=main
default: $(TARGETS)

# 全局的编译和链接选项都放在这儿

# 编译过程
%.o : %.cpp
	$(CXX) -c $(CFLAGS)  $< -o $@

# 下面是每个目标的生成过程
force:

# 程序的生成过程 {{{
SOURCES = $(wildcard *.cpp )
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))
$(TARGETS): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGETS)
# }}}

install:

clean:
	rm -f *.o
	rm -f $(TARGETS)
