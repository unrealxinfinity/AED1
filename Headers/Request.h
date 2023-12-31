//
// Created by Afonso on 30/10/2022.
//

#ifndef AEDOUTRO_REQUEST_H
#define AEDOUTRO_REQUEST_H

#include <string>

using namespace std;

class Request {
private:
    string type;
    unsigned target_student;
    pair<string, string> uc_turma;
public:
    Request(string type, unsigned target_student, string uc, string turma);
    string get_type() const;
    unsigned get_target_student() const;
    pair<string, string> get_uc_turma() const;

};

#endif //AEDOUTRO_REQUEST_H
