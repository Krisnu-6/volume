#include<stdio.h>

enum week
    {
	    sunday = 1 , monday , tuesday , wednesday , tursday , firday , saturday  
    };
    main()
    {
        enum week w;
        w = firday;
        printf("%d",w);
    }