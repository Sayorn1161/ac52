int main() {
    Position pos1(0, 0);
    Position pos2(5, 5);

    int distance = pos1.Distance(pos2);
    std::cout << "Distance: " << distance << std::endl;

    while (pos1.x != pos2.x || pos1.y != pos2.y) {
        pos1.MoveTowards(pos2);
        std::cout << "Pos1: (" << pos1.x << ", " << pos1.y << ")" << std::endl;
    }

    return 0;
}
