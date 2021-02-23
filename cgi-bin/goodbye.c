#include <stdio.h>
#include <stdlib.h>


void goodbye(){

    printf("Content-type: text/html\n\n");
    printf("<html><title>Hello</title><body>\n");
    printf("Goodbye Cruel World NEWWWWWW\n");
    printf("</body></html>");

    fflush(stdout);
    // exit(0);
 }
