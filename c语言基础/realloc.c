#include"stdio.h"
int main()
{
   char *str;
 
   /* ������ڴ���� */
   str = (char *) malloc(15);
   strcpy(str, "runoob");
   printf("String = %s,  Address = %p\n", str, str);
 
   /* ���·����ڴ� */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %p\n", str, str);
 
   free(str);
   
   return(0);
}
