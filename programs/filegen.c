#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

static int LINELEN;
static int MAXLINES;
static bool spaces = false;

int convert_to_int(char *s) {
    int num;

    for(num = 0; *s != '\0'; s++) {
        num = num * 10 + *s - '0';
    }

    return num;
}

void error() {
    printf("Invalid Command. Use: program_name (-output_file) (-line_length) (-no_of_lines)\n");
}

int main(int argc, char **argv) {
    if(argc == 2) {
        if(argv[1][0] != '-') {
            error();
            return 1;
        }
        freopen(argv[1] + 1, "w", stdout);
        LINELEN = 1000;
        MAXLINES = 5000;
    }
    else if(argc == 3) {
        if(argv[1][0] != '-' || argv[2][0] != '-') {
            error();
            return 1;
        }
        freopen(argv[1] + 1, "w", stdout);
        LINELEN = convert_to_int(argv[2] + 1);
        MAXLINES = 5000;
    }
    else if(argc == 4) {
        if(argv[1][0] != '-' || argv[2][0] != '-' || argv[3][0] != '-') {
            error();
            return 1;
        }
        freopen(argv[1] + 1, "w", stdout);
        LINELEN = convert_to_int(argv[2] + 1);
        MAXLINES = convert_to_int(argv[3] + 1);
    }
    else if(argc == 5) {
        if(argv[1][0] != '-' || argv[2][0] != '-' || argv[3][0] != '-' || argv[4][0] != '-' || argv[4][1] != 's' || strlen(argv[4]) > 2) {
            error();
            return 1;
        }
        freopen(argv[1] + 1, "w", stdout);
        LINELEN = convert_to_int(argv[2] + 1);
        MAXLINES = convert_to_int(argv[3] + 1);
        spaces = true;
    }   
    else if(argc > 5) {
        error();
        return 1;
    }
    else {
        freopen("output.txt", "w", stdout);
        LINELEN = 1000;
        MAXLINES = 5000;
    }

    srand(time(0));

    char line[LINELEN];
    int len, i;

    for(int j = 0; j < MAXLINES; j++) {
        len = rand() % LINELEN;
        for(i = 0; i < len; i++) {
            int snuke = spaces == true ? 3 : 2;
            int choose = rand() % snuke;
            if(choose == 0)
                line[i] = 'a' + rand() % 26;
            else if(choose == 1)
                line[i] = 'A' + rand() % 26;
            else line[i] = ' ';
        }
        line[i] = '\0';
        printf("%s\n", line);
    }   
    return 0;
}
