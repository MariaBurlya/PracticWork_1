#include "schema_reader.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

string read_schema(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла: " << filename << endl;
        return "";
    }

    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
