#include <dlfcn.h>
#include <stdio.h>

#ifdef __ONE__
#define LIBPRINT "libprint_1"
#else
#define LIBPRINT "libprint_2"
#endif

void (*something)();

int main(){
        char *error;
        void *handle = dlopen(LIBPRINT, RTLD_LAZY);

        if(!handle){
                printf("error on dlopen %s\n", dlerror());
                return 0;
        }
        something = dlsym(handle, "print_something");
        if((error = dlerror()) != NULL){
                printf("%s\n", error);
                return 0;
        }
        something();

        dlclose(handle);

        return 0;
}
