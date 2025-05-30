#include <stdio.h>
int main()
{
    char ch;
    printf("Nhap mot ky tu: ");
    scanf("%c", &ch);
    switch(ch)
	{
        case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': 
        case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': printf("%c la nguyen am", ch); break;
        default: printf("%c la phu am", ch);
    }
    return 0;
}
