#include "saveloader.hpp"
#include <iostream>
using json = nlohmann::json;
using std::cout;

int main() {
    SaveLoader save;
    
    cout << save.load("example.json", "valorant") << "\n";
    save.edit("example.json", "valorant", 15);
    cout << save.load("example.json", "valorant") << "\n";
    return 0;
}
