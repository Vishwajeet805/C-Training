or(int i = 0 ; i <=7 ; i++ ) 
    {
        for (int j = 0; j <=i; j++)
        {
            printf("  ");
        }
        for (int j = 7; j > i; j--)
        {
            printf("* ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 7; j > i; j--)
        {
            printf("  ");
        }
        for (int j = 7; j > i; j--)
        {
            printf("  ");
        }    
        for (int j = 0; j <=i; j++)
        {
            printf("* ");
        }
        for (int j = 7; j > i; j--)
        {
            printf("* ");
        }    
        printf("\n");
}}