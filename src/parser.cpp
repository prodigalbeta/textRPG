#include "../include/parser.hpp"
#include <string>

extern std::string userGameInput;

namespace Parser {
  namespace Action {
    Verb verbParse(const std::string &userGameInput) {
    std::string s = userGameInput;
      if (s == "use") {
        return Verb::use;
      }
      if (s == "move") { 
        return Verb::move;
      }
      if (s == "attack") {
        return Verb::attack;
      }
      if (s == "look") {
        return Verb::look;
      }
      if (s == "examine") {
        return Verb::examine;
      }
      if (s == "quit") { 
        return Verb::quit;
      } else return Verb::invalid;
    }
  }
}

