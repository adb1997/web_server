#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "csapp.h"

void goodbye(char *cgi_args, char *buf){

    // printf("Content-type: text/html\n\n");
    // printf("<html><title>Hello</title><body>\n");
    // printf("Goodbye Cruel World NEWWWWWW\n");
    // printf("</body></html>");
    char content[MAXLINE];

    snprintf(content, sizeof(content), "Content-type: text/html\n\n"
    "<html><title>Hello</title><body>\n"
    "Goodbye Cruel World NEWWWWWW\n"
    "</body></html>"
    );

    snprintf(buf, MAXLINE, "Connection: close\r\n"
        "Content-length: %zu\r\n"
        "Content-type: text/html\r\n"
        "\r\n"
        "%s", strlen(content),  content
         );


    // fflush(stdout);
    // exit(0);
 }
