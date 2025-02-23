![Static Badge](https://img.shields.io/badge/version-0.1-black?style=plastic&labelColor=green)
# saveloader-json
This repository's purpose is to **simplify** the use of [nlohmann's json repository](https://github.com/nlohmann/json).

# Usage
There are currently 2 commands to use: `load()` and `edit()`
## Load
The `load()` functions is used to load data from a JSON file.

Example code: 
```cpp
#include "saveloader.hpp"
#include <iostream>
using json = nlohmann::json;
using std::cout;

// ..

SaveLoader save;
cout << save.load("example.json", "insert_key_here") << "\n";
```

## Edit
The `edit()` functions is used to edit data from a JSON file.

Example code: 
```cpp
#include "saveloader.hpp"
using json = nlohmann::json;

// ..

SaveLoader save;
save.edit("example.json", "insert_key_here", 15);
```
