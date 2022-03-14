FILENAME = main.c
TARGET = main

INSTALL_NAME = uplow

# Getting all sources files in src folder
SOURCES = $(wildcard src/*.c)
# Converting source files names to objects files
OBJECTS = $(patsubst src/%.c, obj/%.o, $(SOURCES))

# Rule to compute the main program while requiring the objects files
$(TARGET) : $(FILENAME) $(OBJECTS)
	gcc $(FILENAME) $(OBJECTS) -o $(TARGET)

# Implicit rule to compute the object file
obj/%.o : src/%.c
	gcc -c $^ -o $@

run : $(OUT)
	 ./$(OUT)

clear :
	rm -f $(OUT) $(OBJECTS)

install : $(TARGET)
	mv $(TARGET) ~/bin/$(INSTALL_NAME)
	chmod 777 ~/bin/$(INSTALL_NAME)