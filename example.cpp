#include <iostream>
#include <vector>
#include <array>

// class Entity {
//     public:
//         list x;
//         list y;
//         list size;
//         list max_accel;
//         Entity(list x, list y): x{x}, y{y} {
//         }
//     private:
// };
// int main() {
//     list x = {0};
//     list y;
//     Entity e = Entity(x, y);
//     std::cout << e.x[0] << '\n';
// }


/* U like dis?? >:) fat struct go brr */

struct EntitiesVector { // dynamic array
    std::vector<int> x;
    std::vector<int> y;
    std::vector<int> size;
    std::vector<float> max_accel;
    std::vector<float> fov;
    std::vector<float> energy_capacity;
};
// OR
struct EntitiesArray { // statically allocate max possible size
    std::array<int, (1 << 16)> x;
    std::array<int, (1 << 16)> y;
    std::array<int, (1 << 16)> size;
    std::array<float, (1 << 16)> max_accel;
    std::array<float, (1 << 16)> fov;
    std::array<float, (1 << 16)> energy_capacity;
};

int main() {
    // Entities* entities = new(Entities);
    // delete(entities);
}