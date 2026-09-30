#include "utils.hpp"

// string related
std::string to_lower(std::string s) {
  for (char &c : s)
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
