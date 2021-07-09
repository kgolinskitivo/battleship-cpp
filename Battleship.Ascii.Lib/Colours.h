#pragma once

#include <string>

namespace Battleship {
namespace Ascii {

class Colours {
public:
    using Colour = std::string;
    static const Colour blue;
    static const Colour green;
    static const Colour red;
    static const Colour yellow;
    static const Colour colorEnd;

    static const Colour hit;
    static const Colour miss;
    static const Colour sunk;
};

} /* namespace Ascii */
} /* namespace Battleship */
