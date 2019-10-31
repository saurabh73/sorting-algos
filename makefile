CC = gcc
CFLAGS = -Wall
DEPS = sorto.h
OBJFILES = main_driver.o bubble_sort.o heap_sort.o selection_sort.o quick_sort.o insertion_sort.o merge_sort.o
TARGET = final

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~