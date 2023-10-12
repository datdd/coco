COMPILER := gcc
OPTIONS := -g -Wall
BUILD := build
OBJECTS := $(BUILD)/string_utility.o

ifeq (YES,$(ENABLE_COVERAGE))
OPTIONS += --cs-on --cs-mcdc --cs-mcc --cs-function-profiler=all
endif

ifeq (YES,$(EXTRA_PROFILE))
OPTIONS += -DEXTRA_PROFILE
OBJECTS += $(BUILD)/time_utility.o
endif

COMPILE := $(COMPILER) $(OPTIONS)

# Compile main by default
all: program

# $(BUILD)/*.o expands to all .o files in the $(BUILD) directory
program: main.c $(OBJECTS)
	$(COMPILE) $< $(BUILD)/*.o -o $@

$(BUILD)/string_utility.o: string_utility.c string_utility.h build
	$(COMPILE) -c $< -o $@

$(BUILD)/time_utility.o: time_utility.c time_utility.h build
	$(COMPILE) -c $< -o $@

# Make the build directory if it doesn't exist
build:
	mkdir -p $(BUILD)

# Delete the build directory and program
clean:
	rm -rf $(BUILD) program

# These rules do not correspond to a specific file
.PHONY: build clean