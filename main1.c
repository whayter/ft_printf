#include <stdio.h>
#include "includes/ft_printf.h"

int main()
{
	// unsigned int i = 2147483650;

    // printf("-- printf --\n");
	// printf("%d\n", printf("salut %% \n"));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("salut %% \n"));

    // printf("\n-- printf --\n");
    // printf("%d\n", printf("salut : %c %c %c%c%c %s %d %i%d\n", 'a', 'T', 'p', 'Z', '1', "hahaha", -4567, 9874, 2));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("salut : %c %c %c%c%c %s %d %i%d\n", 'a', 'T', 'p', 'Z', '1', "hahaha", -4567, 9874, 2));
  
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%d %d %d %d %d\n", 2147483647, 2147483648, 0, -2147483647, -2147483650));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%d %d %d %d %d\n", 2147483647, 2147483648, 0, -2147483647, -2147483650));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%p %p %p\n", "a", "21474", "coco"));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%p %p %p\n", "a", "21474", "coco"));

    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%s %d %u %u\n", "unsigned int", -1234, 0, i));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%s %d %u %u\n", "unsigned int", -1234, 0, i));

    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%d %010d %d %d %d %d %d\n", 1234, -1234, 0, 2147483647, -2147483648, 2147483648, 9999999999));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("%d %010d %d %d %d %d %d\n", 1234, -1234, 0, 2147483647, -2147483648, 2147483648, 9999999999));
 
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%x %x %u\n", 456, i, -2147483648));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%x %x %u\n", 456, i, -2147483648));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%X %X %u\n", 456, i, -2147483648));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%X %X %u\n", 456, i, -2147483648));

    // printf("\n-- printf --\n");
    // printf("%d\n", printf("%%%%%%%%%%%%\n"));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%%%%%%%%%%%%\n"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("%d %d %d\n", 456, i, 2147483647));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%d %d %d\n", 456, i, 2147483647));
	
    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%0010d| |%015u| |%10s|\n", -1234, 2147483700, "winston"));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0010d| |%015u| |%10s|\n", -1234, 2147483700, "winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%10d| |%15u| |%15s|\n", -1234, 2147483700, "hayter"));
    // printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%10d| |%15u| |%15s|\n", -1234, 2147483700, "hayter"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-006d| |%-015u| |%-10s|\n", -1234, 2147483700, "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-006d| |%-015u| |%-10s|\n", -1234, 2147483700, "winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%0-6d| |%-15u| |%-10s|\n", -1234, 2147483700, "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%0-6d| |%-15u| |%-10s|\n", -1234, 2147483700, "winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%10d| |%5d| |%8s| |%3s|\n", 1234, 5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%10d| |%5d| |%8s| |%3s|\n", 1234, 5678, "winston", "winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%10d| |%5d| |%8s| |%3s|\n", -1234, -5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%10d| |%5d| |%8s| |%3s|\n", -1234, -5678, "winston", "winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%010d| |%0005d| |%08s| |%003s|\n", 1234, 5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%010d| |%0005d| |%08s| |%003s|\n", 1234, 5678, "winston", "winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%010d| |%0005d| |%08s| |%003s|\n", -1234, -5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%010d| |%0005d| |%08s| |%003s|\n", -1234, -5678, "winston", "winston"));
	
    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-10d| |%---5d| |%--8s| |%-3s|\n", 1234, 5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-10d| |%---5d| |%--8s| |%-3s|\n", 1234, 5678, "winston", "winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%-10d| |%---5d| |%--8s| |%-3s|\n", -1234, -5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-10d| |%---5d| |%--8s| |%-3s|\n", -1234, -5678, "winston", "winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-0010d| |%---05d| |%--0008s| |%-03s|\n", 1234, 5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-0010d| |%---05d| |%--0008s| |%-03s|\n", 1234, 5678, "winston", "winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%-0010d| |%---05d| |%--0008s| |%-03s|\n", -1234, -5678, "winston", "winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-0010d| |%---05d| |%--0008s| |%-03s|\n", -1234, -5678, "winston", "winston"));


    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*d| |%*d| |%*s| |%*s|\n", 10,1234, 5,5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%*d| |%*d| |%*s| |%*s|\n", 10,1234, 5,5678, 8,"winston", 3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%*d| |%*d| |%*s| |%*s|\n", 10,-1234, 5,-5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%*d| |%*d| |%*s| |%*s|\n", 10,-1234, 5,-5678, 8,"winston", 3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", 15,1234, 5,5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", 15,1234, 5,5678, 8,"winston", 3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", 15,-1234, 5,-5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", 15,-1234, 5,-5678, 8,"winston", 3,"winston"));

    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%*d| |%*d| |%*s| |%*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%*d| |%*d| |%*s| |%*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%*d| |%*d| |%*s| |%*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%*d| |%*d| |%*s| |%*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%00*d| |%0*d| |%000*s| |%0*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%---*d| |%--*d| |%-*s| |%----*s|\n", 10,1234, 5,5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%---*d| |%--*d| |%-*s| |%----*s|\n", 10,1234, 5,5678, 8,"winston", 3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%-*d| |%-*d| |%-*s| |%-*s|\n", 10,-1234, 5,-5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-*d| |%-*d| |%-*s| |%-*s|\n", 10,-1234, 5,-5678, 8,"winston", 3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,1234, 5,5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,1234, 5,5678, 8,"winston", 3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,-1234, 5,-5678, 8,"winston", 3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", 15,-1234, 5,-5678, 8,"winston", 3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*d| |%-*d| |%-*s| |%-*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-*d| |%-*d| |%-*s| |%-*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%-*d| |%-*d| |%-*s| |%-*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-*d| |%-*d| |%-*s| |%-*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,1234, -5,5678, -8,"winston", -3,"winston"));
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%-00*d| |%-0*d| |%-000*s| |%-0*s|\n", -15,-1234, -5,-5678, -8,"winston", -3,"winston"));

    // printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.x| |%*.x| |%*.x| |%*.x|\n", 15, 1234, 15, -1234, 5, 1234, 5, -1234));			
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%*.x| |%*.x| |%*.x| |%*.x|\n", 15, 1234, 15, -1234, 5, 1234, 5, -1234));		
	
    // printf("\n-- printf --\n");
    // printf("%d\n", printf("|%*.x| |%*.x| |%*.x| |%*.x|\n", -15,1234, -15,-1234, -5,1234, -5,-1234));		
	// printf("-- ft_printf --\n");
    // printf("%d\n", ft_printf("|%*.x| |%*.x| |%*.x| |%*.x|\n", -15,1234, -15,-1234, -5,1234, -5,-1234));

	// printf("\n-- printf --\n");																			
	// printf("%d\n", printf("|%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234));		//
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234));	//
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", -15,1234, -15,-1234, -5,1234, -5,-1234));		//
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0*.d| |%0*.d| |%0*.d| |%0*.d|\n", -15,1234, -15,-1234, -5,1234, -5,-1234));//
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.*s| |%.*s| |%.*s|\n", 15,"winston", 4,"winston", 7,"winston"));			//
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.*s| |%.*s| |%.*s|\n", 15,"winston", 4,"winston", 7,"winston"));		//
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.*s| |%.*s| |%.*s|\n", -15,"winston", -4,"winston", -7,"winston"));		//
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.*s| |%.*s| |%.*s|\n", -15,"winston", -4,"winston", -7,"winston"));//

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.s| |%*.s| |%*.s|\n", 15,"winston", 4,"winston", 7,"winston"));			//
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.s| |%*.s| |%*.s|\n", 15,"winston", 4,"winston", 7,"winston"));		//

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.s| |%*.s| |%*.s|\n", -15,"winston", -4,"winston", -7,"winston"));		//
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.s| |%*.s| |%*.s|\n", -15,"winston", -4,"winston", -7,"winston"));//

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.*d| |%.*d| |%.*d| |%.*d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.*d| |%.*d| |%.*d| |%.*d|\n", 15,1234, 15,-1234, 5,1234, 5,-1234));
		
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.*d| |%.*d| |%.*d| |%.*d|\n", -15,1234, -15,-1234, -5,1234, -5,-1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.*d| |%.*d| |%.*d| |%.*d|\n", -15,1234, -15,-1234, -5,1234, -5,-1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234));			// 5 spaces, 6 0, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234));  		//
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234));		// 6 0, 1234, 5 spaces
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*x| |%*.*x| |%*.*x| |%*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234));		// 6 + 5 spaces, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234));		// 1234, 6 + 5 spaces
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,10,1234, 10,15,1234, 0,0,1234, 15,3,1234));
		
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,10,1234, -10,15,1234, -0,0,1234, -15,3,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", 15,-10,1234, 10,-15,1234, 0,-0,1234, 15,-3,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*x| |%-*.*x| |%-*.*x| |%-*.*x|\n", -15,-10,1234, -10,-15,1234, -0,-0,1234, -15,-3,1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234));			// 5 spaces, 6 0, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234));  		// <---je fais flag_star[0] - flag_star[1] c'est pas bon
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234));		// 6 0, 1234, 5 spaces
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234));		// 6 + 5 spaces, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234));		// 1234, 6 + 5 spaces
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%*.*d| |%*.*d| |%*.*d|\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234));			// 5 spaces, 6 0, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,10,-1234, 10,15,-1234, 0,0,-1234, 15,3,-1234));  		// <---je fais flag_star[0] - flag_star[1] c'est pas bon
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234));		// 6 0, 1234, 5 spaces
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,10,-1234, -10,15,-1234, -0,0,-1234, -15,3,-1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234));		// 6 + 5 spaces, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", 15,-10,-1234, 10,-15,-1234, 0,-0,-1234, 15,-3,-1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234));		// 1234, 6 + 5 spaces
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*d| |%-*.*d| |%-*.*d| |%-*.*d|\n", -15,-10,-1234, -10,-15,-1234, -0,-0,-1234, -15,-3,-1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,10,"winston", 10,15,"winston", 0,0,"winston", 15,3,"winston")); //en cas de chaine de caractere, argument a gauche
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,10,"winston", 10,15,"winston", 0,0,"winston", 15,3,"winston"));// correspond au nombre d'espaces avant et argument
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,10,"winston", -10,15,"winston", -0,0,"winston", -15,3,"winston")); // a droite correspond au nombre maximal de caracteres
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,10,"winston", -10,15,"winston", -0,0,"winston", -15,3,"winston")); // a afficher
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,-10,"winston", 10,-15,"winston", 0,-0,"winston", 15,-3,"winston"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", 15,-10,"winston", 10,-15,"winston", 0,-0,"winston", 15,-3,"winston"));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,-10,"winston", -10,-15,"winston", -0,-0,"winston", -15,-3,"winston"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*s| |%*.*s| |%*.*s| |%*.*s|\n", -15,-10,"winston", -10,-15,"winston", -0,-0,"winston", -15,-3,"winston"));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,10,"winston", 10,15,"winston", 0,0,"winston", 15,3,"winston")); //en cas de chaine de caractere, argument a gauche
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,10,"winston", 10,15,"winston", 0,0,"winston", 15,3,"winston"));// correspond au nombre d'espaces avant et argument
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,10,"winston", -10,15,"winston", -0,0,"winston", -15,3,"winston")); // a droite correspond au nombre maximal de caracteres
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,10,"winston", -10,15,"winston", -0,0,"winston", -15,3,"winston")); // a afficher
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,-10,"winston", 10,-15,"winston", 0,-0,"winston", 15,-3,"winston"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", 15,-10,"winston", 10,-15,"winston", 0,-0,"winston", 15,-3,"winston"));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,-10,"winston", -10,-15,"winston", -0,-0,"winston", -15,-3,"winston"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-*.*s| |%-*.*s| |%-*.*s| |%-*.*s|\n", -15,-10,"winston", -10,-15,"winston", -0,-0,"winston", -15,-3,"winston"));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.10d| |%10.15d| |%0.0d| |%15.3d|\n", 1234, 1234, 1234, 1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.10d| |%10.15d| |%0.0d| |%15.3d|\n", 1234, 1234, 1234, 1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%015.10d| |%010.15d| |%0.0d| |%015.3d|\n", 1234, 1234, 1234, 1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%015.10d| |%010.15d| |%0.0d| |%015.3d|\n", 1234, 1234, 1234, 1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-015.10d| |%-010.15d| |%0.0d| |%-015.3d|\n", 1234, 1234, 1234, 1234));  //CA MARCHE MAIS JE NAI PAS GERE LES '-' ENCORE
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-015.10d| |%-010.15d| |%0.0d| |%-015.3d|\n", 1234, 1234, 1234, 1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,1234, 15,1234, -10,1234, -15,1234, 0,1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n", 10,123456, 15,123456, -10,123456, -15,123456, 0,123456));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.*d| |%10.*d| |%15.*d| |%10.*d| |%10.*d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.15d| |%*.10d| |%*.15d| |%*.10d| |%*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0*.15d| |%0*.10d| |%0*.15d| |%0*.10d| |%0*.10d|\n", 10,-1234, 15,-1234, -10,-1234, -15,-1234, 0,-1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.*x| |%10.*x| |%15.*x| |%10.*x| |%10.*x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.15x| |%*.10x| |%*.15x| |%*.10x| |%*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%0*.15x| |%0*.10x| |%0*.15x| |%0*.10x| |%0*.10x|\n", 10,-123456, 15,-123456, -10,-123456, -15,-123456, 0,-123456));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", 1234, 1234, 1234, 1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", 1234, 1234, 1234, 1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", -1234, -1234, -1234, -1234));			// 5 spaces, 6 0, 1234
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.10x| |%10.15x| |%0.0x| |%15.3x|\n", -1234, -1234, -1234, -1234));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%d| |%.d| |%10.d| |%.10d| |%10.10d| |%.s|\n", 0, 0, 0, 0, 0, "winston"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%d| |%.d| |%10.d| |%.10d| |%10.10d| |%.s|\n", 0, 0, 0, 0, 0, "winston"));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%x| |%.x| |%10.x| |%.10x| |%10.10x|\n", 0, 0, 0, 0, 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%x| |%.x| |%10.x| |%.10x| |%10.10x|\n", 0, 0, 0, 0, 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15c| |%10c| |%015c| |%010c| |%-15c|\n", 'a', 'b', 'c', 'd', 'e'));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15c| |%10c| |%015c| |%010c| |%-15c|\n", 'a', 'b', 'c', 'd', 'e'));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*c| |%*c| |%0*c| |%0*c| |%*c|\n", 15,'a', 10,'b', 15,'c', 10,'d', -15,'e'));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*c| |%*c| |%0*c| |%0*c| |%*c|\n", 15,'a', 10,'b', 15,'c', 10,'d', -15,'e'));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%10d| |%-10d| |%--10d| |%---10d| |%----10d|\n", 1234, 1234, 1234, 1234, 1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%10d| |%-10d| |%--10d| |%---10d| |%----10d|\n", 1234, 1234, 1234, 1234, 1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234, 15,10,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234, -15,10,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234, 15,-10,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.*d| |%-*.*d| |%--*.*d| |%---*.*d| |%----*.*d|\n", -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234, -15,-10,1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%15.10d| |%-15.10d| |%--15.10d| |%---15.10d| |%----15.10d|\n", 1234, 1234, 1234, 1234, 1234));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%15.10d| |%-15.10d| |%--15.10d| |%---15.10d| |%----15.10d|\n", 1234, 1234, 1234, 1234, 1234));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-.d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-.d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%1.d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%1.d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.1d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.1d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%05.d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%05.d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%5.0d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%5.0d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-2c|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-2c|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-2d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-2d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-2s|\n", ""));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-2s|\n", ""));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-2%|\n"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-2%|\n"));	

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-5c|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-5c|\n", 0));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%-5d|\n", 0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%-5d|\n", 0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.c| |%*.c|\n", 5,0, -5,0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.c| |%*.c|\n", 5,0, -5,0));
	
	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.d| |%*.d|\n", 5,0, -5,0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.d| |%*.d|\n", 5,0, -5,0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%*.p| |%*.p|\n", 5,0, -5,0));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%*.p| |%*.p|\n", 5,0, -5,0));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%.p|\n", NULL));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%.p|\n", NULL));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("%c\n", 'a'));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("%c\n", 'a'));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("bonjour %s commnt ça %d\n", NULL, 8));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("bonjour %s commnt ça %d\n", NULL, 8));

	// printf("\n-- printf --\n");
	// printf("%d\n", printf("|%%|\n"));
	// printf("-- ft_printf --\n");
	// printf("%d\n", ft_printf("|%%|\n"));

	printf("\n-- printf --\n");
	printf("%d\n", printf("|%*.%|\n", 3));
	printf("-- ft_printf --\n");
	printf("%d\n", ft_printf("|%*.%|\n", 3));

	printf("\n-- printf --\n");
	printf("%d\n", printf("|%03.%|\n"));
	printf("-- ft_printf --\n");
	printf("%d\n", ft_printf("|%03.%|\n"));

	printf("\n-- printf --\n");
	printf("%d\n", printf("|%0*.%|\n", 3));
	printf("-- ft_printf --\n");
	printf("%d\n", ft_printf("|%0*.%|\n", 3));

	printf("\n-- printf --\n");
	printf("%d\n", printf("|%0*.%|\n", 3));
	printf("-- ft_printf --\n");
	printf("%d\n", ft_printf("|%0*.%|\n", 3));

	printf("\n-- printf --\n");
	printf("%d\n", printf("|%04.3%|\n"));
	printf("-- ft_printf --\n");
	printf("%d\n", ft_printf("|%04.3%|\n"));

	printf("\n-- printf --\n");
	printf("%d\n", printf("|%0*.%|\n", -4));
	printf("-- ft_printf --\n");
	printf("%d\n", ft_printf("|%0*.%|\n", -4));

	return (0);
}