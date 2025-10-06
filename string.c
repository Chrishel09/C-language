#include<stdio.h>
int stringlength(const char *str)
{
    int length=0;
    while(str[length]!=0)
    {
        length++;
    }
    return length;
}
int stringCompare(const char *str1,const char *str2)
{
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]<str2[i])
        {
            return -1;
        }
        else if(str1[i]>str2[i])
        {
            return 1;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]=='\0')
{
    return 0;
}
else if(str1[i]=='\0')
{
    return -1;
}
else{
    return 1;
}
}
int main()
{
    char str1[]="Hello";
    char str2[]="world";
    char str3[]="Hello";
    char str4[]="hello";
    printf("length of '%s':%d \n",str1,stringlength(str1));
    printf("comparing '%s' and '%s' :%d\n",str1, str2, stringCompare(str1,str2));
    printf("comparing '%s' and '%s' :%d\n",str1, str3, stringCompare(str1,str3));
    printf("comparing '%s' and '%s' :%d\n",str1, str4, stringCompare(str1,str4));
return 0;
}
