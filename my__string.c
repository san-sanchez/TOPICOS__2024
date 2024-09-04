#include "my__string.h"

char *my_strstr(const char *s1, const char *s2)
{
    const char *ptr;
    const char *reset=s2;

    while(*s1)
    {
        if(*s1==*s2)
        {
            ptr=s1;

            while(*s2 && (*s2==*s1))
            {
                s2++;
                s1++;

                if(*s2=='\0')
                {
                    return (char*)ptr;
                }
            }
        }

        s1++;
        s2=reset;
    }
    return NULL;
}
char *my_strtok(char *s1, const char *s2);
/*char *my_strcat(char*s1, const char *s2)
{
    char *ptr;
    s1=s1+ my_strlen(s1) + 1;
    while(*s2)
    {
        *s1=(char*)*s2;
        s2++;
        s1++;
    }
    return ptr;
}*/
char *my_strcpy(char *s1, const char *s2)
{
    char*ptr__init=s1;

    while(*s2)
    {
        *s1=*s2;
        s1++;s2++;
    }
    *s1='\0';
    return ptr__init;
}
char *my_strncpy(char *s1, const char *s2, size_t n)
{
    char*ptr__init=s1;
    s1=s1+my_strlen(s1);
    while(*s2 && (n > 0)){
        *s1=*s2;
        s1++;s2++;
        n--;
    }
    *s1='\0';
    return ptr__init;
}
/*char *my_strncat(char*s1, const char *s2, size_t n);
(
    char *ptr;
    s1=s1+ my_strlen(s1) + 1;
    while(*s2 && (n>0))
    (
        *s1=(char)*s2;
        s2++;
        s1++;
        n--;
    )

    return ptr;
)*/


char *my_strchr(char *src, int c)
{
    while(*src && (*src!=(char)c))src++;
    return src;
}
char *my_strrchr(char *src, int c)
{
    src=src + my_strlen(src)-1;//src=sizeof(src)/char;
    while(*src && (*src!=(char)c))src--;
    return src;
}
char *my_strpbrk(const char *s1, const char *s2);
char *my_strerror(int errnum);

int my_strcmp(const char *s1, const char *s2)
{
    int rta;
    while(*s1 && *s2)
    {
        if( *s1==*s2)
        {
            s1++;s2++;
            rta=0;
        }
        else if(*s1>*s2)
        {
            rta=1;
        }
        else{
            rta=-1;
        }
    }
    return rta;
}
int my_strncmp(const char *s1, const char *s2, size_t n)
{
    int rta;
    while(*s1 && *s2 && (n>0))
    {
        if( *s1==*s2)
        {
            rta=0;
        }
        else if(*s1>*s2)
        {
            rta=1;
        }
        else{
            rta=-1;
        }
        n--;
    }
    return rta;
}
int my_strcoll(const char *s1, const char *s2);
size_t my_strxfrm(char *s1, const char *s2, size_t n);
size_t my_strcspn(const char *s1, const char *s2);
size_t my_strspn(const char *s1, const char *s2);
size_t my_strlen(const char *src)
{
    size_t total=0;
    while(*src){
        src++;total++;
    }
    return total;
}
