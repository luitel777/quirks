#include <stdio.h>

typedef enum{
        mask_1 = 1 << 1,
        mask_2 = 1 << 2,
        mask_3 = 1 << 3,
}mask;

void bleh(mask create){
        if((create & mask_1) == mask_1){
                printf("mask 1 is available\n");
        }
        if((create & mask_2) == mask_2){
                printf("mask 2 is available\n");
        }
        if((create & mask_3) == mask_3){
                printf("mask 3 is available\n");
        }

}

int main(){
        bleh(mask_1 | mask_3);
}
