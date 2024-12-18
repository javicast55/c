#include <stdio.h>
//paste a function name with ";", note "int main(void)"" is not here.
void meow (int n);

//Call a function
int main() {
        meow(100);
}

//Create a function here and paste before the call
void meow (int n) {
    for (int i = 0; i < n; i++) {
        printf("\n!!!Meow!!*\n");
    }
    
}

       
   

