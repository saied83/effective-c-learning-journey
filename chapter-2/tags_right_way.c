#include <stdio.h>
#include <stdlib.h>

int main () {

    // this is good 
    // cat - 01 
    typedef struct {int x;} t;


    // cat - 01 does not work on this
    struct tnode {
        int count;
        struct tnode *left;
        struct tnode *right;
        };


    // modified version but not recommended 
    typedef struct tnode {
        int count;
        struct tnode *left;
        struct tnode *right;
        } tnode;


    // recommended ugly tag name
    typedef struct tnode_ {
    int count;
    struct tnode_   *left;
    struct tnode_   *right;
    };


    // for better readability 
    // main declaration 
    void (*signal(int, void (*)(int)))(int);

    // with tags 
    typedef void fv(int), (*pfv)(int);


    // refine with tag one 
    fv *signal(int, fv *);

    //refine with tag two
    pfv signal(int, pfv);

    return EXIT_SUCCESS;
}