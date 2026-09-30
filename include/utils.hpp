#pragma once

#include "diagnostics.hpp"
#include <cctype>
#include <cstdlib>
#include <string>
#include <utility>
#include <optional>

// file io related
std::pair<std::string, std::optional<Diagnostic>> read_file(std::string path);

// string related
std::string to_lower(std::string s);

// env variables related
bool env_var_exists(std::string name);
