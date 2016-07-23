#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,t=0;
    char a[50];
    char b[50][50];
    gets(a);
    while(a[i]!='\0'){
        b[t][j]=a[i];
        i++;
        j++;
        if(a[i]==32){
            b[t][j]='\0';
            t++;
            j=0;
        }
            }
           // printf("%d",t);
    for(i=t;i>=0;i--)
    {
        
        printf("%s ",b[i]);   }
    
    return 0;
}
