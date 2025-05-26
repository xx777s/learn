int main()
{
    char ch[19] = "welcome to git!!!!";
    //int sz = sizeof(ch) / sizeof(ch[0]);
    int sz = strlen(ch);//sz=18
    for (int a = 0; a < sz/2; a++)
    {
        for (int c = 0; c <= a; c++)
        {
            printf("%c", ch[c]);
        }
        
        for (int b = a + 1; b < sz - 1 - a; b++)
        {
            printf("*");
        }

        for (int d = sz - 1 - a; d <= sz - 1; d++)
        {
            printf("%c", ch[d]);
        }

        Sleep(1000);
        system("cls");
    }
    return 0;
}
