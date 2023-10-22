#include <stdio.h>
#include <stdlib.h>

void sort(int **array, int length);

int main(int argc, char ** argv){
    int *nums;
    
    nums = (int*)malloc((argc-2) * sizeof(int));

    for(int i=1;i<argc;i++){
        nums[i] = atoi(argv[i]);
    }
    /*
    for(int i=1;i<argc;i++){
        printf("%d", nums[i]);
    }
    */
    sort(&nums, argc);

    free(nums);
    return 0;
}

void sort(int **array, int length){
    int *ptr = *array;
    int t;
    int array2[length];

    for(int i=1;i<length;i++){
        printf("%d", ptr[i]);
        array2[i] = ptr[i];
    }
    printf("||");
    for(int i=0;i<length;i++){
        for(int j=1;j<length;j++){
            if (array2[i] > array2[i+1]){
                t = array2[i+1];
                array2[i+1] = array2[i];
                array2[i] = t;
            }
        }
    }
    for(int i=1;i<length;i++){
        printf("%d", array2[i]);
    }
}