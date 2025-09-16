#include <stdio.h>
#include <string.h>
#include "adblock.h"

int main() {
    load_blocked_urls("blocked_urls.txt");

    char url[256];
    printf("URL :\n");

    while (1) {
        printf("> ");
        if (!fgets(url, sizeof(url), stdin)) break;
        url[strcspn(url, "\n")] = 0;

        if (strcmp(url, "q") == 0) break;

        if (is_ad_url(url)) {
            printf("[block] %s\n", url);
        } else {
            printf("[Open] %s\n", url);
        }
    }

    return 0;
}
