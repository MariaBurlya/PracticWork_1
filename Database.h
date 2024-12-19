#ifndef DATABASE_H
#define DATABASE_H
#include <string>

using namespace std;

class Database {
    
    public:
        Database(const string& schema);
        void initialize();
    
    private:
        string schema;
};

#endif
