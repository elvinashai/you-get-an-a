#pragma once
#include <string>

class Assignment {
private:
    std::string name;
    double points;

public:
    Assignment(std::string name, double points);

    std::string get_name() const;
    double get_points() const;
};