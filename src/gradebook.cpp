#include "gradebook.hpp"
#include <sstream>

using namespace std;

void Gradebook::add_student(string first, string last, string id) {
    students.push_back(Student(first, last, id));

    // add empty grade for existing assignments
    for (int i = 0; i < assignments.size(); i++) {
        students.back().add_empty_grade();
    }
}

void Gradebook::add_assignment(string name, double points) {
    assignments.push_back(Assignment(name, points));

    // add empty grade to all students
    for (int i = 0; i < students.size(); i++) {
        students[i].add_empty_grade();
    }
}

void Gradebook::enter_grade(string id, string assignment, double grade) {
    int student_index = -1;
    int assignment_index = -1;

    // find student
    for (int i = 0; i < students.size(); i++) {
        if (students[i].get_id() == id) {
            student_index = i;
            break;
        }
    }

    // find assignment
    for (int i = 0; i < assignments.size(); i++) {
        if (assignments[i].get_name() == assignment) {
            assignment_index = i;
            break;
        }
    }

    if (student_index != -1 && assignment_index != -1) {
        students[student_index].set_grade(assignment_index, grade);
    }
}

string Gradebook::report() const {
    stringstream ss;

    ss << "Last,First,ID";

    for (const auto& a : assignments) {
        ss << "," << a.get_name();
    }
    ss << "\n";

    for (const auto& s : students) {
        ss << s.get_last() << "," << s.get_first() << "," << s.get_id();

        for (int i = 0; i < assignments.size(); i++) {
            double g = s.get_grade(i);

            if (g == -1)
                ss << ",none";
            else
                ss << "," << g;
        }
        ss << "\n";
    }

    return ss.str();
}