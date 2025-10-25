FLAGS   = -Wall -Wextra
LIBS    =
CC      = gcc
NAME    = ll
SRC     = ./src/
INC     = ./include/
BUILD   = ./build/
TARGET  = $(BUILD)$(NAME)

SOURCES = $(shell find $(SRC) -name '*.c')
OBJS    = $(patsubst $(SRC)%.c,$(BUILD)%.o,$(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(FLAGS) $(LIBS)

$(BUILD)%.o: $(SRC)%.c
	@mkdir -p $(dir $@)
	$(CC) -c $< -o $@ $(FLAGS) -I$(INC)

clean:
	rm -rf $(BUILD)

debug: $(SOURCES)
	$(CC) -g $(SOURCES) -o $(TARGET)_d $(FLAGS) $(LIBS)

run: $(TARGET)
	$(TARGET)
