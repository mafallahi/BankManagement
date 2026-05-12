#include "clearScreen.h"
#include <cstdlib>

namespace ClearConsoleScreen
{
    void Clear()
    {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
    }
}
