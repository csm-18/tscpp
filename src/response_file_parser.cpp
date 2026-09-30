#include "response_file_parser.hpp"
#include "utils.hpp"
#include <optional>
#include <vector>

std::vector<std::optional<Diagnostic>> expand_response_files(std::vector<std::string>& args) {
    std::vector<std::optional<Diagnostic>> errors;

    auto [text, read_error] = read_file("hello.tt");
    if (read_error) {
        read_error->print();
    } else {
        std::cout << text << "\n";
    }

    return errors;
}
