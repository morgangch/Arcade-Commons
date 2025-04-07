#pragma once
#include "IGame.hpp"

namespace arcade {

    enum class Input {
        NONE,
        UP,
        DOWN,
        LEFT,
        RIGHT,
        ENTER,
        BACKSPACE,
        ESCAPE,
        SPACE,
        NEXT_GAME,
        PREV_GAME,
        NEXT_LIB,
        PREV_LIB,
        EXIT,
        UNKNOWN
    };

    class IGraphic {
        public:
            virtual ~IGraphic() = default;
            virtual void init() = 0;
            virtual void update() = 0;
            virtual void render() = 0;
            virtual void draw_entities() = 0;
            virtual void destroy() = 0;
            virtual void clear() = 0;
            virtual std::vector<Input> getEvents() = 0;
    };
}
