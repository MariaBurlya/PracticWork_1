#include "Database.h"
#include <iostream>

using namespace std;

Database::Database(const string& schema) :
schema(schema) {}

void Database::initialize() {
    cout << "База данных инициализирована по схеме: " << schema << endl;
}
