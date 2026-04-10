#pragma once
#include <vector>
#include <string>
#include "student.hpp"
#include "assignment.hpp"

class Gradebook {
private:
    std::vector<Student> students;
    std::vector<Assignment> assignments;

public:
    void add_student(std::string first, std::string last, std::string id);
    void add_assignment(std::string name, double points);
    void enter_grade(std::string id, std::string assignment, double grade);

    std::string report() const;
};