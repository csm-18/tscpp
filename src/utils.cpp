#include "utils.hpp"

//string related
std::string to_lower(std::string s){
  for(char& c : s)
    c = std::tolower(c);
  return s;
}
