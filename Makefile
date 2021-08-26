CC := gcc
CFLAGS := -c

TASK_1 := float_point
TASK_2 := minus_numbers
TASK_3 := types

.PHONY: all $(TASK_1) $(TASK_2) $(TASK_3) clean

all: $(TASK_1) $(TASK_2) $(TASK_3)

debug: CFLAGS += -g 
debug: all

$(TASK_1): $(TASK_1).c
	$(CC) $(CFLAGS) $(TASK_1).c -o  $(TASK_1) 

$(TASK_2): $(TASK_2).c
	$(CC) $(CFLAGS) $(TASK_2).c -o $(TASK_2)

$(TASK_3): $(TASK_3).c
	$(CC) $(CFLAGS) $(TASK_3).c -o $(TASK_3) 

clean:
	rm -rf $(TASK_1) $(TASK_2) $(TASK_3)
