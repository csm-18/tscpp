#include "utils.hpp"
#include <fstream>
#include <sstream>

// file io related
std::pair<std::string, std::optional<Diagnostic>> read_file(std::string path) {
    std::ifstream file(path);

    if (!file) {
        auto read_error = create_diagnostic(5083, {path});
        return {"", read_error};
    }

    std::stringstream buffer;
    buffer << file.rdbuf();

    return {buffer.str(), std::nullopt};
}

// string related
std::string to_lower(std::string s) {
    for (char& c : s)
        c = std::tolower(c);
    return s;
}

// env variables related
bool env_var_exists(std::string name) {
    if (std::getenv(name.c_str())) {
        return true;
    }
    return false;
}
