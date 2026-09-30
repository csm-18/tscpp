#include <cstddef>
#include <iostream>
#include <optional>
#include <string>
#include <vector>

extern bool CSM_FUNNY_COMMENTS;

struct Diagnostic {
  size_t code;
  std::string message;
  std::string category;
  std::string comment;

  void print() {
    std::cout << category + " TS" << code << ": " + message + "\n";
    if (CSM_FUNNY_COMMENTS) {
      std::cout << "  " + comment + "\n";
    }
  }
};

extern std::vector<Diagnostic> DIAGNOSTICS;

std::optional<Diagnostic> create_diagnostic(size_t code,
                                            std::vector<std::string>);
