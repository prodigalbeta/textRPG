#pragma once
#include <string>



namespace Parser{
  namespace Action {
    enum class Verb {
      use,
      move,
      attack,
      look,
      examine,
      quit,
      invalid
    };
    Verb verbParse(const std::string &userGameInput);

  }
  namespace Direction {
    enum class Compass {
      north,
      south,
      east,
      west,
      invalid
    };
  }
}
