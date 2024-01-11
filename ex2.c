#include <stdio.h>
#include <string.h>

void Alphabet( char name[])
{
   int len = strlen(name);
   int temp = 0;
   for(int i = 0; i < len ; i++)
   {
       for(int j = i + 1 ; j < len ; j++)
       {
           if (name[i] > name[j])
           {
               temp = name[i];
               name[i] = name[j];
               name[j] = temp;
           }
       }
   }
   
    



int main(void)
{
    char N[1000];
    
      printf("enter characters : ");
    fgets(N , sizeof(N), stdin);
    
     N[strcspn(N, "\n")] = '\0';
    
    Alphabet(N);
     
      printf("string : %s\n", N);
}
    
