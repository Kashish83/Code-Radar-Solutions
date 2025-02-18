#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch){
        if(isdigit(ch)){
            printf("Digit\n");
        }else if(isalpha(ch)){
            char lower_ch = tolower(ch);
            if(lower_ch == 'a'||lower_ch == 'e'||lower_ch == 'i'||lower_ch == 'o'||lower_ch == 'u'||){
                printf("Vowel\n")
            }else{
                printf("Consonant\n")
            }
            else{
                printf("Special Character\n")
            }
        }
    }
}