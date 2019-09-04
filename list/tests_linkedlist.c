#include "wvtest.h"
#include "linkedlist.h"

WVTEST_MAIN("Empty list")
{
    WVPASS(List_getSize() == 0);
}

