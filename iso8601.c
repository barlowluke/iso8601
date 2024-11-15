#include <locale.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    char buff[70];
    time_t t = time(NULL);
    struct tm my_time = *localtime(&t);

    if (strftime(buff, sizeof buff, "%FT%T%z", &my_time)) {
        puts(buff);
        return 0;
    } else {
        puts("strftime failed");
        return 1;
    }
}
