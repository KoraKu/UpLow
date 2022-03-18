SOURCE = main.c
TARGET = uplow

# Getting all sources files in src folder
SOURCES = $(wildcard src/*.c)
# Converting source files names to objects files
OBJECTS = $(patsubst src/%.c, obj/%.o, $(SOURCES))

# Rule to compute the main program while requiring the objects files
$(TARGET) : $(SOURCE) $(OBJECTS)
	gcc $^ -o $@

# Implicit rule to compute the object file
obj/%.o : src/%.c
	gcc -c $^ -o $@

run : $(TARGET)
	 ./$^

clear :
	rm -f $(TARGET) obj/*

install : $(TARGET)
	mv $^ ~/bin/
	chmod 777 ~/bin/$^

uninstall:
	rm ~/bin/$(TARGET)
