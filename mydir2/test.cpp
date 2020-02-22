#include <stdio.h>
#include <string.h>

#include "test2.h"
extern "C"
{
#include "test1.h"
}


class Classy
{
private:
    char str[100];
public:
    Classy(const char *s);
    ~Classy();
};


Classy::Classy(const char *s)
{
    printf("[%s] %s\n", __FILE__, s);

    strncpy(str, s, sizeof(str));
}

Classy::~Classy()
{
}

void initTestcpp(void)
{
    Classy helping1("We can have classes here!");

    Classy helping2("Isn't that amazing??");

    initTestc();
}
