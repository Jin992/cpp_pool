
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main() {
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    std::cout << "===================================================" << std::endl;
    std::cout << "--- My Tests ---" << std::endl;
    {
        Victim *tst = new Peon("Jake");
        Victim &ref = *(tst);
        robert.polymorph(ref);
        delete tst;
    }
    return 0;
}