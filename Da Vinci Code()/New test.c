#include<stdio.h>
#include<string.h>

int main()
{
    char str1[200],str2[200];
    int feb[90];

    long int a1[110];
    int a2[110];
    int i,j=0,t,l,len,x=0;

    feb[0]=1;feb[1]=2;
    for(i=0;i<80;i++)
        feb[i+2]=feb[i]+feb[i+1];

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        for(i=0;i<l;i++)
            scanf("%ld",&a1[i]);
        getchar();
        gets(str1);
        len=strlen(str1);

        for(i=0;i<len;i++)
        {
            if(str1[i]<93&&str1[i]>64)
            {
               str2[j++]=str1[i];
            }

        }
        str2[j]='\0';
        //puts(str1);

        for(i=0; i<l; i++)
        {
            for(j=0; j<80; j++)
            {
                if(feb[j]==a1[i])
                {
                    a2[i]=j;
                    if(j>x)
                        x=j;
                    break;
                }
            }
        }


        for(i=0;i<110;i++)
            str1[i]=32;
        for(i=0; i<l; i++)
            str1[a2[i]]=str2[i];

        str1[++x]='\0';
        puts(str1);

        x=0;j=0;
    }



    return 0;

}

