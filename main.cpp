#include <iostream>
#include <cstdlib>

using namespace std;

void Free_ptr(void * ptr){
    free(ptr);
}

int main(){

    void * ptr = malloc(1337);
    free(ptr);
    free(ptr);

    void * ptr_1 = malloc(1337);
    free(ptr_1);
    delete ptr_1;

    void * ptr_2 = malloc(1337);
    free(ptr_2);
    Free_ptr(ptr_2);

    void * ptr_3 = malloc(1337);
    free(ptr_3);
    realloc(ptr_3, 1337);

    return 0;
}