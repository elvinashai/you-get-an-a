#include "student.hpp"

Student::Student(std::string f, std::string l, std::string id)
    : first_name(f), last_name(l), id(id) {}

void Student::add_empty_grade() {
    grades.push_back(-1);
}

void Student::set_grade(int index, double grade) {
    if (index >= 0 && index < grades.size()) {
        grades[index] = grade;
    }
}

double Student::get_grade(int index) const {
    return grades[index];
}

std::string Student::get_first() const { return first_name; }
std::string Student::get_last() const { return last_name; }
std::string Student::get_id() const { return id; }