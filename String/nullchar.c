/*#include<stdio.h>
int main(){
   // char arr[] = {'h','e','l','l','o',' ','w','o','r','l','d'};
   char ch = '\0'; //null char
   printf("%d",ch);
    return 0;
}*/
#include<stdio.h>
int main(){
    char arr[] = {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
  int i=0;
  while(arr[i]!='\0'){
    printf("%c ",arr[i]);
    i++;
  }
  
    return 0;
}
