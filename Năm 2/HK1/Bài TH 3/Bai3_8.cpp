#include <stdio.h>
#include <string.h>
#include <ctype.h>

int DemChuSo(char *s, int i)
{
    if (s[i] == '\0') 
        return 0;
    return (isdigit(s[i]) ? 1 : 0) + DemChuSo(s, i + 1);
}

int DemChuHoa(char *s, int i)
{
    if (s[i] == '\0') 
        return 0;
    return (isupper(s[i]) ? 1 : 0) + DemChuHoa(s, i + 1);
}

int KTTangDan(char *s, int i)
{
    if (s[i + 1] == '\0') 
        return 1; 
    if (s[i] >= s[i + 1]) 
        return 0; 
    return KTTangDan(s, i + 1); 
}

int main()
{
    char s[101];
    
    printf("Nhap chuoi (toi da 100 ky tu): ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    int soChuSo = DemChuSo(s, 0);
    printf("So ky tu la chu so: %d\n", soChuSo);

    int soChuHoa = DemChuHoa(s, 0);
    printf("So ky tu la chu cai hoa: %d\n", soChuHoa);

    if (KTTangDan(s, 0))
        printf("Chuoi tang dan theo thu tu ma ASCII.\n");
    else
        printf("Chuoi khong tang dan theo thu tu ma ASCII.\n");

    return 0;
}
