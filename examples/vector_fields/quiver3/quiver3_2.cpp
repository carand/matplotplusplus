#include <array>
#include <cmath>
#include <matplot/matplot.h>
#include <vector>

std::vector<std::array<double, 3>> get_position();
std::vector<std::array<double, 3>>
get_vectors(const std::vector<std::array<double, 3>> &positions);

int main() {
    using namespace matplot;

    auto positions = get_position();
    auto vectors = get_vectors(positions);
    vector_1d x;
    vector_1d y;
    vector_1d z;
    vector_1d u;
    vector_1d v;
    vector_1d w;
    vector_1d m;
    for (const auto &p : positions) {
        x.emplace_back(p[0]);
        y.emplace_back(p[1]);
        z.emplace_back(p[2]);
    }
    for (const auto &vec : vectors) {
        u.emplace_back(vec[0]);
        v.emplace_back(vec[1]);
        w.emplace_back(vec[2]);
        m.emplace_back(
            sqrt(vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2]));
    }

    quiver3(x, y, z, u, v, w, m, 0.3)->normalize(true).line_width(2);

    show();
    return 0;
}

std::vector<std::array<double, 3>>
get_vectors(const std::vector<std::array<double, 3>> &positions) {
    std::vector<std::array<double, 3>> vectors;
    for (const auto &pos : positions) {
        std::array<double, 3> result{0, 0, 0};
        result[0] =
            pos[0] * exp(-pow(pos[0], 2) - pow(pos[1], 2) - pow(pos[2], 2));
        result[1] =
            pos[1] * exp(-pow(pos[0], 2) - pow(pos[1], 2) - pow(pos[2], 2));
        result[2] =
            pos[2] * exp(-pow(pos[0], 2) - pow(pos[1], 2) - pow(pos[2], 2));
        vectors.emplace_back(result);
    }
    return vectors;
}

std::vector<std::array<double, 3>> get_position() {
    std::vector<std::array<double, 3>> p = {
        {-1.0, -1.0, -1.0}, {-1.0, -1.0, -0.5}, {-1.0, -1.0, 0.0},
        {-1.0, -1.0, 0.5},  {-1.0, -1.0, 1.0},  {-1.0, -0.5, -1.0},
        {-1.0, -0.5, -0.5}, {-1.0, -0.5, 0.0},  {-1.0, -0.5, 0.5},
        {-1.0, -0.5, 1.0},  {-1.0, 0.0, -1.0},  {-1.0, 0.0, -0.5},
        {-1.0, 0.0, 0.0},   {-1.0, 0.0, 0.5},   {-1.0, 0.0, 1.0},
        {-1.0, 0.5, -1.0},  {-1.0, 0.5, -0.5},  {-1.0, 0.5, 0.0},
        {-1.0, 0.5, 0.5},   {-1.0, 0.5, 1.0},   {-1.0, 1.0, -1.0},
        {-1.0, 1.0, -0.5},  {-1.0, 1.0, 0.0},   {-1.0, 1.0, 0.5},
        {-1.0, 1.0, 1.0},   {-0.5, -1.0, -1.0}, {-0.5, -1.0, -0.5},
        {-0.5, -1.0, 0.0},  {-0.5, -1.0, 0.5},  {-0.5, -1.0, 1.0},
        {-0.5, -0.5, -1.0}, {-0.5, -0.5, -0.5}, {-0.5, -0.5, 0.0},
        {-0.5, -0.5, 0.5},  {-0.5, -0.5, 1.0},  {-0.5, 0.0, -1.0},
        {-0.5, 0.0, -0.5},  {-0.5, 0.0, 0.0},   {-0.5, 0.0, 0.5},
        {-0.5, 0.0, 1.0},   {-0.5, 0.5, -1.0},  {-0.5, 0.5, -0.5},
        {-0.5, 0.5, 0.0},   {-0.5, 0.5, 0.5},   {-0.5, 0.5, 1.0},
        {-0.5, 1.0, -1.0},  {-0.5, 1.0, -0.5},  {-0.5, 1.0, 0.0},
        {-0.5, 1.0, 0.5},   {-0.5, 1.0, 1.0},   {0.0, -1.0, -1.0},
        {0.0, -1.0, -0.5},  {0.0, -1.0, 0.0},   {0.0, -1.0, 0.5},
        {0.0, -1.0, 1.0},   {0.0, -0.5, -1.0},  {0.0, -0.5, -0.5},
        {0.0, -0.5, 0.0},   {0.0, -0.5, 0.5},   {0.0, -0.5, 1.0},
        {0.0, 0.0, -1.0},   {0.0, 0.0, -0.5},   {0.0, 0.0, 0.0},
        {0.0, 0.0, 0.5},    {0.0, 0.0, 1.0},    {0.0, 0.5, -1.0},
        {0.0, 0.5, -0.5},   {0.0, 0.5, 0.0},    {0.0, 0.5, 0.5},
        {0.0, 0.5, 1.0},    {0.0, 1.0, -1.0},   {0.0, 1.0, -0.5},
        {0.0, 1.0, 0.0},    {0.0, 1.0, 0.5},    {0.0, 1.0, 1.0},
        {0.5, -1.0, -1.0},  {0.5, -1.0, -0.5},  {0.5, -1.0, 0.0},
        {0.5, -1.0, 0.5},   {0.5, -1.0, 1.0},   {0.5, -0.5, -1.0},
        {0.5, -0.5, -0.5},  {0.5, -0.5, 0.0},   {0.5, -0.5, 0.5},
        {0.5, -0.5, 1.0},   {0.5, 0.0, -1.0},   {0.5, 0.0, -0.5},
        {0.5, 0.0, 0.0},    {0.5, 0.0, 0.5},    {0.5, 0.0, 1.0},
        {0.5, 0.5, -1.0},   {0.5, 0.5, -0.5},   {0.5, 0.5, 0.0},
        {0.5, 0.5, 0.5},    {0.5, 0.5, 1.0},    {0.5, 1.0, -1.0},
        {0.5, 1.0, -0.5},   {0.5, 1.0, 0.0},    {0.5, 1.0, 0.5},
        {0.5, 1.0, 1.0},    {1.0, -1.0, -1.0},  {1.0, -1.0, -0.5},
        {1.0, -1.0, 0.0},   {1.0, -1.0, 0.5},   {1.0, -1.0, 1.0},
        {1.0, -0.5, -1.0},  {1.0, -0.5, -0.5},  {1.0, -0.5, 0.0},
        {1.0, -0.5, 0.5},   {1.0, -0.5, 1.0},   {1.0, 0.0, -1.0},
        {1.0, 0.0, -0.5},   {1.0, 0.0, 0.0},    {1.0, 0.0, 0.5},
        {1.0, 0.0, 1.0},    {1.0, 0.5, -1.0},   {1.0, 0.5, -0.5},
        {1.0, 0.5, 0.0},    {1.0, 0.5, 0.5},    {1.0, 0.5, 1.0},
        {1.0, 1.0, -1.0},   {1.0, 1.0, -0.5},   {1.0, 1.0, 0.0},
        {1.0, 1.0, 0.5},    {1.0, 1.0, 1.0}};
    return p;
}

