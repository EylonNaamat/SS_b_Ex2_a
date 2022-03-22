#include <vector>
#include <string>
#include "Direction.hpp"

namespace ariel{
    class Notebook{
        private:
            const uint col = 100;
            uint row;
            uint pages;
            // std::vector<std::vector<std::vector<char>>> book;

        public:
            void write(int page, int row, int column, ariel::Direction direction, const std::string& text);
            static std::string read(int page, int row, int column, ariel::Direction direction, int length);
            void erase(int page, int row, int column, ariel::Direction direction, int length);
            void show(int page);
    };
}