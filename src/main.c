#include <stdio.h>
#include <neotui/neotui.h>


int main()
{
    window* w = malloc(sizeof(window));
    nt_getWindow(w);

    printf("%d %d\n", w->width,w->height);

    free(w);

}
