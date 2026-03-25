CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
PROGRAMS = program1_simple_array program2_string_dup program3_grid_2d

all: $(PROGRAMS)

program1_simple_array: programs/program1_simple_array.c
	$(CC) $(CFLAGS) $< -o $@

program2_string_dup: programs/program2_string_dup.c
	$(CC) $(CFLAGS) $< -o $@

program3_grid_2d: programs/program3_grid_2d.c
	$(CC) $(CFLAGS) $< -o $@

run_all: all
	@echo "=== Running program1_simple_array ==="
	./program1_simple_array
	@echo ""
	@echo "=== Running program2_string_dup ==="
	./program2_string_dup
	@echo ""
	@echo "=== Running program3_grid_2d ==="
	./program3_grid_2d

clean:
	rm -f $(PROGRAMS)

.PHONY: all run_all clean
