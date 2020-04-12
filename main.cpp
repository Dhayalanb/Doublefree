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
    return 0;
}