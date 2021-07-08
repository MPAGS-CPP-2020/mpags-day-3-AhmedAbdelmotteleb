#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP
#include <string>

class CaesarCipher{
    public:
    //constructors
    explicit CaesarCipher(const size_t& key_input);
    explicit CaesarCipher(const std::string& key_input);
    //members
    size_t key{0}; //default value of key is zero
};

#endif // MPAGSCIPHER_CAESARCIPHER_HPP 