all: clean prepare build

prepare:
	mkdir bin

build:
	g++ -o bin/app src/app.cpp

debug-build: clean prepare
	g++ -o bin/app.debug -DDEBUG src/app.cpp

clean:
	rm -rf bin

run:
	./bin/app

debug-run:
	./bin/app.debug --debug
