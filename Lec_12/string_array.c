                                // vowel finder;

/* #include<stdio.h>
int main()
{
    int counter=0;
    char sen[10000];
    fgets(sen, sizeof(sen), stdin);


    for (int i = 0; sen[i] != '\0'; i++)
    {
        if( sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            counter++;
        }

    }
    printf("%d", counter);

    return 0;
} */






                            // small letter to capital letter

/* #include<stdio.h>
int main()
{
    char name[50];
    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }
    puts(name);
    return 0;
} */