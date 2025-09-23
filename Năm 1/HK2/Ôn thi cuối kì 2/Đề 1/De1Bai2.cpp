#include <stdio.h>
#include <string.h>

#define MAX 100

void InKyTu(char s[MAX])
{
  int n;
  do 
  {
    printf("Nhap so ky tu: ");
    scanf("%d", &n);
  } while (!(n <= strlen(s)));

  printf("%d ky tu dau tien cua chuoi: ", n);
  for (int i = 0; i < n; i++) 
  {
    printf("%c", s[i]);
  }
  printf("\n");
}

void DemKyTuNguyenAm(char s[MAX])
{
  int dem = 0;
  
  for (int i = 0; i < strlen(s); i++) 
  {
    if (s[i] == 'a' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e') 
    {
      dem++;
      s[i] -= 32;
    }
  }
  printf("So ky tu nguyen am va viet hoa tuong ung\n");
	printf("%d %s", dem, s);
	printf("\n");
}

void ChuanHoa(char s[MAX])
{
  int j = 0;

  for (int i = 0; i < strlen(s); i++) 
	{
    if (s[i] != ' ' || (i > 0 && s[i - 1] != ' ')) 
		{
      s[j++] = s[i];
    }
  }

  if (j > 0 && s[j - 1] == ' ' || s[j-1] == '\n') 
  {
    j--;
  }
  s[j] = '\0'; 
}

void Xoa2Tu(char s[MAX])
{
	ChuanHoa(s);
	
  int dem = 0; 
	int vt = 0;
	
  for (int i = strlen(s) - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			dem++;
			if (dem == 2)
			{
				vt = i;
				break;
			}
		}	
	}
	
	s[vt] = '\0';
	printf("Chuoi sau khi xoa 2 tu cuoi: %s",s);
}

int main() 
{
  char s[MAX];

  printf("Nhap chuoi: ");
  gets(s);
  printf("Chuoi vua nhap: %s\n", s);

  InKyTu(s);

  DemKyTuNguyenAm(s);

  Xoa2Tu(s);

  return 0;
}