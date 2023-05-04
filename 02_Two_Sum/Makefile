DEBUG_PATH=./debug/
TEST_PATH=./test/
SOURCES=TwoSum.cpp
COMPILER_OPTIONS=-lgtest -lpthread

build:
	g++ -o ${DEBUG_PATH}FindPair Main.cpp ${SOURCES}

buildtest:
	g++ -o ${TEST_PATH}TestFindPair TestRunner.cpp ${SOURCES} ${COMPILER_OPTIONS}

run:
	${DEBUG_PATH}FindPair

runtest:
	${TEST_PATH}TestFindPair
