#include "gameAST.h"


gameGrammar::gameGrammar(gameLexers expected, bool bracketed, bool action)
{
    this->expected = expected;
    this->bracketd = bracketed;
    this->action = action;
}

// Definition and initialization of the language
std::unordered_map<std::string, gameGrammar> gameLanguage = {
    {"if", gameGrammar(gameLexers::expression, true, false)},
    {"jump", gameGrammar(gameLexers::label, false, false)},
   
    {"submit", gameGrammar()},
    {"exit", gameGrammar()},
    {"work", gameGrammar()},

    {"break", gameGrammar(gameLexers::literal)},

    {"moveto", gameGrammar(gameLexers::generic)},
    {"eat", gameGrammar()},
    {"buy", gameGrammar(gameLexers::generic)},
    {"give", gameGrammar(gameLexers::generic, false, false)},
    {"take", gameGrammar(gameLexers::generic, false, false)},
    {"talk", gameGrammar(gameLexers::generic, false, false)},
};


