#include "json.hpp"
#include <string>
#include <fstream>
#include <cassert>
#include <filesystem>
namespace fs = std::filesystem; 
using json = nlohmann::json;
using std::string, std::ofstream, std::ifstream;

class SaveLoader {
    public:
        auto load(string filename, string key) {
            ifstream f(filename);
            json data = json::parse(f);
            auto value = data.find(key);
            assert(value != data.end() and "Key not found.");
            return *value;
        }

        void edit(string filename, string to_change, auto value) {
            ifstream f(filename);
            json data = json::parse(f);
            auto l_value = data.find(to_change);
            assert(l_value != data.end() and "Key not found.");
            *l_value = value; 
        
            ofstream out(filename);
            assert(out.is_open() and "Failed to write to JSON file.");
            out << data.dump(0);
            out.close();
        }
};