BIN_DIR = ./bin
TEST_DIR = ./tests
SRCS = $(wildcard ./*.c)
TESTS = $(wildcard $(TEST_DIR)/*.c)
BINS = $(TESTS:$(TEST_DIR)/%.c=$(BIN_DIR)/%)

.PHONY: all
all: $(BINS)

$(BINS): $(BIN_DIR)
	$(CC) -I./ $(filter $(TEST_DIR)/$(notdir $@).c,$(TESTS)) $(SRCS) -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

.PHONY: test
test: $(BINS)
	@for target in $(BINS);do $$target || exit 893; done

.PHONY: clean
clean:
	rm -rf $(BIN_DIR)
