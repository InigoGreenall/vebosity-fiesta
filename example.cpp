#include <iostream>
#include <vector>
#define list std::vector<unsigned short>
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

struct Entities {
    list x;
    list y;
    list size;
    list max_accel;
    list fov;
    list energy_capacity;
};

int main() {
    Entities* entities = new(Entities);
    delete(entities);
}