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
LINK_TARGETS=main.a
TEST_TARGETS=test
default: $(LINK_TARGETS) $(TEST_TARGETS)

# 全局的编译和链接选项都放在这儿
MY_HOME=~/build-env/build-system/3rd-soft
LDFLAGS = -L $(MY_HOME)/lib
CLINC = -I $(MY_HOME)/include  -I $(MY_HOME)/include/googletest1.8.0/include  -I ../src
LDLIBS = -lpthread -lgtest -lgtest_main

# 编译过程
%.o : %.cpp
	$(CXX) -c $(CFLAGS) $(CLINC) $(LDFLAGS) $(LDLIBS) $< -o $@

# 下面是每个目标的生成过程
force:

# 程序的生成过程 {{{
LINK_SOURCES = $(wildcard ../src/*.cpp )
LINK_OBJECTS = $(patsubst %.cpp, %.o, $(LINK_SOURCES))
$(LINK_TARGETS): $(LINK_OBJECTS)
	ar rcs $(LINK_TARGETS) $(LINK_OBJECTS)

TEST_SOURCES = $(wildcard *.cpp)
TEST_OBJECTS = $(patsubst %.cpp, %.o, $(TEST_SOURCES))
$(TEST_TARGETS): $(TEST_OBJECTS)
	$(CXX) $(TEST_OBJECTS) $(CLINC) $(LDFLAGS) $(LDLIBS) $(LINK_TARGETS) -o ${TEST_TARGETS}
# }}}

install:

clean:
	rm -f *.o
	rm -f ../src/*.o
	rm -f $(LINK_TARGETS)
	rm -f $(TEST_TARGETS)

