    double array[3][3], sum = 0, *p1;
    printf("Please enter a 2-Dim array[3x3] : \n");

    for(int i = 0; i < 3; ++i)
    {
        p1 = array[i];
        while(p1 != array[i+1])
        {
            scanf("%lf", p1);
            ++p1;
        }

    }