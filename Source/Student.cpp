//
// Created by Afonso on 21/10/2022.
//

#include "../Headers/Student.h"

Student::Student(string name, unsigned num): name(name), num(num) {}

Student::Student() {}

/**
 * Adds UCTurma object to list of UCTurmas belonging to Student
 * @param uc_turma UCTurma to be added
 */
void Student::add_uc_turma(UCTurma &uc_turma) {
    uc_turmas.emplace_back(&uc_turma);
}

bool Student::operator<(Student other) const {
    return this->num > other.num;
}