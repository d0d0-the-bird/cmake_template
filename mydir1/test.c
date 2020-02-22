#include <stdio.h>

static const char introduction[] = "This module is called";

void initTestc(void)
{
    printf("%s %s and we are at line %d\n", introduction, __FILE__, __LINE__);

    printf("Oh, and by the way, introduction string is %d chars long!\n",
           sizeof(introduction));
}
