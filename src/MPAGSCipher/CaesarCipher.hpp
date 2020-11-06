#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP
#include <string>

class CaesarCipher{
    public:
    //constructor
    CaesarCipher(const size_t& key_input);
    size_t key;
};

#endif // MPAGSCIPHER_CAESARCIPHER_HPP 