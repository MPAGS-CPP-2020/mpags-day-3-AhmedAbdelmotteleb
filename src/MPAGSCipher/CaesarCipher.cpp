#include <iostream>
#include "CaesarCipher.hpp"
#include <string>

//constructors
CaesarCipher::CaesarCipher(const size_t& key_input)
: key{key_input}
{} 

CaesarCipher::CaesarCipher(const std::string& key_input) //convert key input from string to unsigned int
{
      if ( ! key_input.empty() ) {
    // Before doing the conversion we should check that the string contains a
    // valid positive integer.
    // Here we do that by looping through each character and checking that it
    // is a digit. What is rather hard to check is whether the number is too
    // large to be represented by an unsigned long, so we've omitted that for
    // the time being.
    // (Since the conversion function std::stoul will throw an exception if the
    // string does not represent a valid unsigned long, we could check for and
    // handled that instead but we only cover exceptions very briefly on the
    // final day of this course - they are a very complex area of C++ that
    // could take an entire course on their own!)
    for ( const auto& elem : key_input ) {
      if ( ! std::isdigit(elem) ) {
	std::cerr << "[error] cipher key must be an unsigned long integer for Caesar cipher,\n"
	          << "        the supplied key (" << key_input << ") could not be successfully converted" << std::endl;
	return;
      }
    }
    key = std::stoul(key_input);
  }
}
