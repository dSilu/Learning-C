// figure out the type of the entered character

# include <stdio.h>
# include <ctype.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z'){
        printf("'%c' is a capital letter\n", c);
    }
    else if (c >= 'a' && c <= 'z'){
        printf("'%c' is a small letter\n", c);
    }
    else if (isdigit(c)){
        printf("'%c' is a digit.\n", c);
    }
    else{
        printf("'%c' is a special character.\n", c);
    }
    return 0;
}