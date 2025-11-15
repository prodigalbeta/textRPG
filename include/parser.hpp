#pragma once

namespace Parser{
  namespace Action {
    enum class Verb {
      use,
      move,
      attack,
      look,
      examine,
      quit
    };
  }
  namespace Direction {
    enum class Compass {
      north,
      south,
      east,
      west
    };
  }
}
