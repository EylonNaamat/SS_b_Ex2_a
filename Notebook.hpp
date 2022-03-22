#include <vector>
#include <string>
#include <stdexcept>
#include "Direction.hpp"

namespace ariel{
    class Notebook{
        private:
            const uint col = 100;
            uint row;
            uint pages;
            // std::vector<std::vector<std::vector<char>>> book;

        public:
            void write(uint page, uint row, uint column, ariel::Direction direction, const std::string& text);
            static std::string read(uint page, uint row, uint column, ariel::Direction direction, uint length);
            void erase(uint page, uint row, uint column, ariel::Direction direction, uint length);
            void show(uint page);
    };
}