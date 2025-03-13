# Makefile

# Цель сборки
TARGET = exec

# Исходный файл
SRC = wassup.cpp

# Препроцессированный файл
PREPROCESSED = $(SRC:.cpp=.ii)

# Скомпилированный файл
ASSEMBLY = $(SRC:.cpp=.s)

# Объектный файл
OBJECT = $(SRC:.cpp=.o)

# Компилятор
CXX = g++

# Ассемблер
AS = as

# Флаги компиляции
CXXFLAGS = -Wall -Wextra -g3 -std=c++17

# Правило для сборки цели
$(TARGET): $(OBJECT)
    @echo "Линковка (компоновка): g++ $(OBJECT) -o $(TARGET)"
    $(CXX) $(OBJECT) -o $(TARGET)

# Правило для ассемблирования
$(OBJECT): $(ASSEMBLY)
    @echo "Ассемблирование: $(AS) $(ASSEMBLY) -o $(OBJECT)"
    $(AS) $(ASSEMBLY) -o $(OBJECT)

# Правило для компиляции
$(ASSEMBLY): $(PREPROCESSED)
    @echo "Компиляция: $(CXX) -S $(PREPROCESSED) -o $(ASSEMBLY)"
    $(CXX) -S $(PREPROCESSED) -o $(ASSEMBLY)

# Правило для препроцессинга
$(PREPROCESSED): $(SRC)
    @echo "Препроцессинг: $(CXX) -E $(SRC) -o $(PREPROCESSED)"
    $(CXX) -E $(SRC) -o $(PREPROCESSED)

# Правило для очистки
clean:
    @echo "Очистка: удаляем $(PREPROCESSED), $(ASSEMBLY), $(OBJECT) и $(TARGET)"
    rm -f $(PREPROCESSED) $(ASSEMBLY) $(OBJECT) $(TARGET)

# Фиктивные цели
.PHONY: all clean
all: $(TARGET)