#include <sstream>
#include <iomanip>

#include <termcolor.hpp>
#include "except.hpp"

Exception::Exception(std::string const type, uint32_t const code, std::string const message) {
    std::stringstream ss;
    ss << termcolor::red << "Compilation aborted. Error code: 0x" << std::hex << code << '\n'
        << type << ": " << message << "\033[0m" << std::endl;
    m_msg = std::string{ss.str()};
}
Exception::~Exception() {}

std::string Exception::getMessage() const { return m_msg; }