#pragma once
#include <string>
#include <vector>

namespace arcade {

    class IGame {
        public:
            virtual ~IGame() = default;

            virtual void init() = 0;
            virtual void update() = 0;
            virtual std::vector<std::string> getEntities() = 0;
            virtual void destroy() = 0;
            virtual void handleEvents(const std::vector<int>& events) = 0;
            virtual bool isGameOver() const = 0;
            virtual int getScore() const = 0;
    };
}