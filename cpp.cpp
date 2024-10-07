#include <cmath>  

class Position {
public:
    int x, y;
    Position(int x = 0, int y = 0) : x(x), y(y) {}

    int Distance(const Position& other) const {
        int deltaX = other.x - this->x;
        int deltaY = other.y - this->y;
        return static_cast<int>(std::sqrt(deltaX * deltaX + deltaY * deltaY));
    }
    void MoveTowards(const Position& target) {
        if (x < target.x) {
            ++x;
        } else if (x > target.x) {
            --x;
        }

        if (y < target.y) {
            ++y;
        } else if (y > target.y) {
            --y;
        }
    }
};
