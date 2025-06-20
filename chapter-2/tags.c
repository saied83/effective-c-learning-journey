#include <stdio.h>
#include <stdlib.h>

int main () {

    // declare variables from large size to short for better performance -- padding 

    struct user {
        char email[25];
        char name[20];
        char dob[15];
        int id;

        union educations
        {
            char degree_name[20];
            char institution[]
        };
        

    };

    enum direction {
        top, bottom, right , left, up, down
    };



    struct user User1;
    enum direction current_directions = top;

return EXIT_SUCCESS;
}