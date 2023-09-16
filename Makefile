all: clean prepare build

prepare:
	mkdir bin

build:
	g++ -o bin/app src/app.cpp

clean:
	rm -rf bin

run:
	./bin/app
