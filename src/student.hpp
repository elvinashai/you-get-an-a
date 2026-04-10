#pragma once
#include <string>
#include <vector>

class Student {
private:
    std::string first_name;
    std::string last_name;
    std::string id;
    std::vector<double> grades; // -1 = no grade

public:
    Student(std::string f, std::string l, std::string id);

    void add_empty_grade();
    void set_grade(int index, double grade);
    double get_grade(int index) const;

    std::string get_first() const;
    std::string get_last() const;
    std::string get_id() const;
};