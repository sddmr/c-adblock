#include "adblock.h"
#include <stdio.h>
#include <string.h>

#define MAX_URLS 100
#define MAX_URL_LEN 256

static char blocked_urls[MAX_URLS][MAX_URL_LEN];
static int url_count = 0;

void load_blocked_urls(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("blocked_urls.txt error");
        return;
    }
    char line[MAX_URL_LEN];
    url_count = 0;
    while (fgets(line, sizeof(line), file) && url_count < MAX_URLS) {
        line[strcspn(line, "\n")] = 0; 
        strncpy(blocked_urls[url_count], line, MAX_URL_LEN);
        url_count++;
    }
    fclose(file);
}

bool is_ad_url(const char *url) {
    for (int i = 0; i < url_count; i++) {
        if (strstr(url, blocked_urls[i]) != NULL) {
            return true;
        }
    }
    return false;
}
