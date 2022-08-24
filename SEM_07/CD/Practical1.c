// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    
    char chr[20];
    printf("Enter String: ");
    scanf("%s",&chr);
    
    int len = strlen(chr);
    int ans;
    int val;
    for (int i = 0; i < len; i++) {
        if(chr[i] == 'a' || chr[i] == 'b'){
            val = 1;
        }
        else{
            val = 0;
            break;
        }
    }
    
    if(val == 1){
        if(chr[len-1] == 'b' && chr[len-2] == 'b' && chr[len-3] == 'a'){
             printf("Pattern Matched");
        }
        else{
            printf("Pattern Not Matched");
        }
    }
    else if(val == 0){
        printf("Please Enter Valid String..");
    }else{
        
    }

    return 0;
}
