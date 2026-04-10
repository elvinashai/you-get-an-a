#include "assignment.hpp"

Assignment::Assignment(std::string name, double points)
    : name(name), points(points) {}

std::string Assignment::get_name() const {
    return name;
}

double Assignment::get_points() const {
    return points;
}