#include <stdio.h>
#include <stdlib.h>

int main () {

    struct user {
        int id;
        char name[20];
        char email[25];
        char dob[15];

    };

    enum direction {
        top, bottom, right , left, up, down
    };



    struct user User1;
    enum direction current_directions = top;

return EXIT_SUCCESS;
}