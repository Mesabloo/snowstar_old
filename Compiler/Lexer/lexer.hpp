#ifndef LEXER_HPP
#define LEXER_HPP

#include <vector>
#include <string>
#include <memory>

#include "token.hpp"

class Lexer {
    public:
        Lexer(std::string const);
        ~Lexer();

        auto tokenize() -> std::vector<Token>;
        auto preprocess(std::vector<Token> const&) const -> std::vector<Token>;
        auto optimize(std::vector<Token> const&) const -> std::vector<std::vector<Token>>;

    private:
        bool isString, isLComment, isMLComment;
        std::string buffer;
        std::unique_ptr<Token> checkToken(std::string const&) const;
        std::unique_ptr<Token> checkSyntax(char const);

    protected:
        std::string m_path;
        std::vector<Token> m_gen_tokens;
};

#endif