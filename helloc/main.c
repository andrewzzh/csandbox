#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    char *msg = "Hello C";
    int n = 100;
    printf("%s %d\n", msg, n);
    double x = 1.0;
    double y;
    
    y = sin(x);
    printf("six(x)=%f\n", y);

    FILE *my_stream;
    my_stream = fopen("a.txt", "r");
    if(my_stream == NULL){
        printf("File could not be opened\n");
    }else{
        printf("File opened. Closing it now \n");
        fclose(my_stream);
    }
}