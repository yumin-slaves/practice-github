CXX = g++
CXXFLAGS = -Wall -Wextra -g -O0 -std=c++17 -Iinclude

SRC_DIR = src
BUILD_DIR = build
TARGET = run
EXT =
TARGET_BIN = $(TARGET)$(EXT)

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET_BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

all: $(TARGET_BIN)

clean:
	rm -rf $(BUILD_DIR) $(TARGET_BIN)

.PHONY: all clean
