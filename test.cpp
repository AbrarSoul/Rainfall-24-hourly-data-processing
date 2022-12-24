#include <bits/stdc++.h>
#define PI 3.14159265
int main()
{
    FILE *f,*v;
    f = fopen("input.txt", "r");
    v = fopen("output.txt", "w");
    char c1,c2;
    int i=0;
    int j=0;
    int n;
    //read file into array
    float numberArray[110000];
    float save[110000];
    char arr[150000];

   /* while((c1=fgetc(f))!=EOF)
    {
        arr[i] = c1;
        i++;
    }

    for(j=0;j<i;j++)
    {
        if(arr[j]=='\n')
        {
            arr[j] == ' ';
        }

    }*/


while((c1=fgetc(f))!=EOF)
{
    //c1=fgetc(f);


        if(c1!='*')
        {
            //printf("Mango ");
            fscanf(f, "%f", &numberArray[i]);
            i++;
        }
        else if(c1=='*')
        {
            for(j=0;j<i-1;j++)
            {
                fprintf(v,"%.1f\n",numberArray[j]);
                printf("%.1f\n",numberArray[j]);
            }
            printf("****\n");
            fprintf(v,"****\n");
            c1=fgetc(f);
            c1=fgetc(f);
            c1=fgetc(f);
            i=0;
        }


        //printf(" lul");

}


    return 0;
}
