#include "arg_parser.hpp"
#include "response_file_parser.hpp"
#include <iostream>

void parse(std::vector<std::string>& args) {
    auto response_file_errors = expand_response_files(args);

    if (!response_file_errors.empty()) {
        for (auto& error : response_file_errors) {
            if (error) {
                error->print();
            }
        }
    } else {
        for (auto& arg : args) {
            std::cout << arg << "\n";
        }
    }
}
