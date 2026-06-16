#include <string>

namespace log_line {
std::string message(std::string line) {
    return line.substr(line.find(":")+2);
}

std::string log_level(std::string line) {
    return line.substr(1, line.find("]")-1);
}

std::string reformat(std::string line) {
    std::string log_lvl = line.substr(1, line.find("]")-1);
    std::string log_msg = line.substr(line.find(":")+2);

    return log_msg + " (" + log_lvl + ')';
}
}  // namespace log_line
