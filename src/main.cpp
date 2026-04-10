#include <iostream>
#include "gradebook.hpp"

using namespace std;

int main() {
  Gradebook gb;

  gb.add_student("Bob", "Bobberson", "ABC123");
  gb.add_student("Sam", "Sammerson", "DEF456");
  gb.add_student("Jess", "Jesserson", "HIJ789");

  gb.add_assignment("Quiz 1", 100);
  gb.add_assignment("Lab 1", 50);

  gb.enter_grade("ABC123", "Quiz 1", 85);
  gb.enter_grade("DEF456", "Quiz 1", 95);
  gb.enter_grade("HIJ789", "Lab 1", 49);
  gb.enter_grade("HIJ789", "Quiz 1", 93);
  gb.enter_grade("ABC123", "Lab 1", 0);

  cout << gb.report();

  return 0;
}