#include <vector>
class Entities {
    public:
        std::vector<int> x;
        std::vector<int> y;
        std::vector<int> size;
        std::vector<float> fov;
        std::vector<float> max_accel;
        std::vector<float> energy_capacity;
        Entities();
        ~Entities();
};