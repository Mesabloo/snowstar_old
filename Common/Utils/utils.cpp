#include <sstream>
#include <limits>
#include <fstream>
#include <algorithm>

#include "utils.hpp"

namespace utils {
    std::vector<std::string> str_split(std::string const& str, char const separator) {
        std::vector<std::string> vect;
        std::istringstream f{str};
        std::string s;
        while (getline(f, s, separator)) {
            vect.push_back(s);
        }
        return vect;
    }

    bool str_endswith(std::string const& str, std::string const& suffix, unsigned const suffixLen) {
        return str.size() >= suffixLen && (str.substr(str.size()-suffixLen, suffixLen) == suffix);
    }

    bool str_endswith(std::string const& str, std::string const& suffix) {
        return str_endswith(str, suffix, suffix.size());
    }

    bool str_startswith(std::string const& str, std::string const& prefix, unsigned const prefixLen) {
        return str.size() >= prefixLen && (str.substr(0, prefixLen) == prefix);
    }

    bool str_startswith(std::string const& str, std::string const& prefix) {
        return str_startswith(str, prefix, prefix.size());
    }

    std::streamsize file_getsize(std::string const& path) {
        std::ifstream file;
        file.open(path, std::ios::in|std::ios::binary);
        file.ignore(std::numeric_limits<std::streamsize>::max());
        std::streamsize length = file.gcount();
        file.clear();   //  Since ignore will have set eof.
        file.seekg(0, std::ios_base::beg);
        file.close();
        return length;
    }

    bool str_is_number(const std::string& s) {
        return std::find_if(s.begin(), s.end(),
            [=] (char c) { return !std::isdigit(c) && c != '.'; }) == s.end();
    }

    std::string str_join(std::string const& first, std::string const& second, char const div) {
        return std::string{first + div + second};
    }
}