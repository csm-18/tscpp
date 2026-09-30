#include "diagnostics.hpp"
#include "utils.hpp"
#include <fmt/format.h>

bool CSM_FUNNY_COMMENTS = env_var_exists("CSM_FUNNY_COMMENTS");

std::vector<Diagnostic> DIAGNOSTICS = {
    {
        5083,
        "Cannot read file '{}'.",
        "error",
        "Oye, file kitthe hai? 😂",
    },
    {6045,
     "Unterminated quoted string in response file '{}'.",
     "error",
     "String close karna nahi aata… aur TypeScript developer ban gaya? Gajab! 😂"},

    {100000,
     "Too many response files provided. Circular reference suspected in file "
     "'{}'.",
     "error",
     "Bhai, teri file khulte-khulte toh main budha ho jaunga. 😂"}};

std::optional<Diagnostic> create_diagnostic(size_t code, std::vector<std::string> args) {
    Diagnostic diagnostic;

    for (const auto& d : DIAGNOSTICS) {
        if (d.code == code) {
            diagnostic = d;
            auto msg = diagnostic.message;
            for (const auto& arg : args) {
                msg = fmt::format(msg, arg);
            }
            diagnostic.message = msg;
            return diagnostic;
        }
    }

    return std::nullopt;
}
