#include <iostream>
#include <string>
#include "Database.h"
#include "schema_reader.h"
#include "Select_From.h"

using namespace std;

int main() {
    string schema = read_schema("schema.json");
    if (schema.empty()) {
        cout << "Ошибка при прочтении схемы" << endl;
        return 1;
    }
    Database db(schema);
    db.initialize();
    
    Tasks_Executor task_executor(schema);
    string task;
    cout << "Введите SQL-запрос: ";
    getline(cin, task);
    task_executor.select(task);
    
    return 0;
}
