TARGET = uplow
SOURCE = main.c

all : $(TARGET)

$(TARGET): $(SOURCE)
	gcc main.c -o $@

install: $(TARGET)
	cp $^ ~/bin

clean:
	rm $(TARGET)

run: $(TARGET)
	./$^
