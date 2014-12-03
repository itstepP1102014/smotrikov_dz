    int proc = 100;
    for(int i=0; i<=proc; i++ )
    {
        for(int j=0; j<=10000000; j++ ) {}
        printf ("\r%d%%[",i);
        for (int x=0; x<i; x++){
            printf("=");
        }
        //printf("]\n");
    }
    return 0;
