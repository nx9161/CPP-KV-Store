#include <iostream>
#include <map>
#include <string>

class SimpleDB {
private:
    std::map<std::string, std::string> data;

public:
    void put(std::string key, std::string value) {
        data[key] = value;
    }

    std::string get(std::string key) {
        return (data.find(key) != data.end()) ? data[key] : "Key Not Found";
    }

    void listAll() {
        for (auto const& [key, val] : data) {
            std::cout << key << " -> " << val << std::endl;
        }
    }
};

int main() {
    SimpleDB db;
    db.put("User", "Naman Parmar");
    db.put("Course", "Data Science");
    db.put("University", "Rowan");

    std::cout << "Database Entry: " << db.get("Course") << std::endl;
    std::cout << "\nFull Record Listing:" << std::endl;
    db.listAll();
    
    return 0;
}