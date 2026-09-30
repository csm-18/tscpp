#include "arg_parser.hpp"
#include "diagnostics.hpp"
#include <iostream>

void parse(std::vector<std::string>& args) {
    auto error = create_diagnostic(100000, {"hello.txt"});
    if (error) {
        error->print();
    }
}
