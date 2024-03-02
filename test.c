/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibouill <pibouill@student.NULLprague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:32:01 by pibouill          #+#    #+#             */
/*   Updated: 2023/10/31 14:30:11 by pibouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	int	test = 42;
	int	max_int = INT_MAX;
	int	min_int = INT_MIN;
	int	*ptr_test = &test;
	int	**ptrptr_test = &ptr_test;

	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("these are i and d: %i %d %i %d %i %d\n", test, test, max_int, max_int, min_int, min_int)));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("these are i and d: %i %d %i %d %i %d\n", test, test, max_int, max_int, min_int, min_int)));
	printf("\n");
	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("this is p: %p %p\n", ptr_test, ptrptr_test)));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("this is p: %p %p\n", ptr_test, ptrptr_test)));
	printf("\n");
	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("this is x: %x %x %x %x %x\n", test, *ptr_test, max_int, min_int, 0)));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("this is x: %x %x %x %x %x\n", test, *ptr_test, max_int, min_int, 0)));
	printf("\n");
	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("this is X: %X %X %X %X %X\n", test, *ptr_test, max_int, min_int, 0)));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("this is X: %X %X %X %X %X\n", test, *ptr_test, max_int, min_int, 0)));
	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("this is %% and u: %% %% %% %% %% %% %% %u %u %u\n", UINT32_MAX, 43240, 42)));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("this is %% and u: %% %% %% %% %% %% %% %u %u %u\n", UINT32_MAX, 43240, 42)));
	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("this is NULL test for p and x and s -> %p | %s | and some string after\n", NULL, "")));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("this is NULL test for p and x and s -> %p | %s | and some string after\n", NULL, "")));

	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf->   ");
	ft_printf("return count is %i\n", (ft_printf("very long string:\n Duis non nisl gravida, elementum lacus id, finibus orci. Nulla facilisi. Donec varius erat eu velit porta dictum. Duis semper velit sit amet est sodales vehicula. Donec eget ornare tortor. Aliquam lobortis diam arcu, a euismod augue pretium vitae. Mauris volutpat, diam laoreet vulputate gravida, magna nulla porttitor erat, varius rutrum sapien mi eget lorem. Morbi ut risus facilisis, porta arcu sit amet, dignissim nunc. Pellentesque at lorem ut ipsum fringilla porta. Phasellus sit amet arcu in purus malesuada finibus eget ut ipsum. Nunc fermentum lacus tristique, ultricies sem quis, gravida justo. Ut eget pretium libero. Mauris varius id nibh at ornare. Maecenas eu eros mattis, posuere tellus ac, pharetra lectus. Integer pulvinar est sed nibh sollicitudin, eu luctus dolor pretium. Interdum et malesuada fames ac ante ipsum primis in faucibus. Nunc accumsan ex eu blandit tristique. Nulla metus eros, vulputate in turpis nec, ullamcorper sagittis purus. Etiam pulvinar leo et purus pellentesque, quis sollicitudin est tristique. Integer elit risus, finibus vitae lorem sit amet, luctus efficitur nunc. Sed vitae eros dui.Quisque cursus ultricies convallis. Cras viverra, augue volutpat consectetur venenatis, lectus leo rutrum erat, scelerisque fringilla lectus dolor vel eros. Mauris sollicitudin justo eu suscipit aliquam. Vivamus vel fermentum massa. Maecenas bibendum aliquam gravida. Sed sit amet est molestie, bibendum erat ac, mattis tellus. Morbi imperdiet sit amet leo a elementum. Duis purus eros, cursus sit amet sapien quis, commodo ultricies ipsum. Ut id lectus ligula. Proin non magna molestie, varius eros eleifend, semper leo. Donec malesuada tincidunt velit, eu ultrices lacus fermentum ac. Maecenas dolor ipsum, ultrices vel convallis non, facilisis ac erat. Aenean tortor nunc, iaculis quis velit vitae, posuere laoreet neque. Suspendisse vel tempus mauris. Sed efficitur, mauris in condimentum laoreet, mauris mauris pellentesque lorem, vel fermentum felis velit et ante. Sed porttitor consequat convallis.\n")));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("very long string:\n Duis non nisl gravida, elementum lacus id, finibus orci. Nulla facilisi. Donec varius erat eu velit porta dictum. Duis semper velit sit amet est sodales vehicula. Donec eget ornare tortor. Aliquam lobortis diam arcu, a euismod augue pretium vitae. Mauris volutpat, diam laoreet vulputate gravida, magna nulla porttitor erat, varius rutrum sapien mi eget lorem. Morbi ut risus facilisis, porta arcu sit amet, dignissim nunc. Pellentesque at lorem ut ipsum fringilla porta. Phasellus sit amet arcu in purus malesuada finibus eget ut ipsum. Nunc fermentum lacus tristique, ultricies sem quis, gravida justo. Ut eget pretium libero. Mauris varius id nibh at ornare. Maecenas eu eros mattis, posuere tellus ac, pharetra lectus. Integer pulvinar est sed nibh sollicitudin, eu luctus dolor pretium. Interdum et malesuada fames ac ante ipsum primis in faucibus. Nunc accumsan ex eu blandit tristique. Nulla metus eros, vulputate in turpis nec, ullamcorper sagittis purus. Etiam pulvinar leo et purus pellentesque, quis sollicitudin est tristique. Integer elit risus, finibus vitae lorem sit amet, luctus efficitur nunc. Sed vitae eros dui.Quisque cursus ultricies convallis. Cras viverra, augue volutpat consectetur venenatis, lectus leo rutrum erat, scelerisque fringilla lectus dolor vel eros. Mauris sollicitudin justo eu suscipit aliquam. Vivamus vel fermentum massa. Maecenas bibendum aliquam gravida. Sed sit amet est molestie, bibendum erat ac, mattis tellus. Morbi imperdiet sit amet leo a elementum. Duis purus eros, cursus sit amet sapien quis, commodo ultricies ipsum. Ut id lectus ligula. Proin non magna molestie, varius eros eleifend, semper leo. Donec malesuada tincidunt velit, eu ultrices lacus fermentum ac. Maecenas dolor ipsum, ultrices vel convallis non, facilisis ac erat. Aenean tortor nunc, iaculis quis velit vitae, posuere laoreet neque. Suspendisse vel tempus mauris. Sed efficitur, mauris in condimentum laoreet, mauris mauris pellentesque lorem, vel fermentum felis velit et ante. Sed porttitor consequat convallis.\n")));


	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf-> ");
	ft_printf("return count is %i\n", (ft_printf("ptrptr with p x and X: %p %x %X\n", *ptrptr_test, **ptrptr_test, **ptrptr_test)));
	printf(">stdio printf->");
	printf("return count is %i\n", (printf("ptrptr with p x and X: %p %x %X\n", *ptrptr_test, **ptrptr_test, **ptrptr_test)));

	char *null_str = NULL;
	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf-> ");
	ft_printf("return count is %i\n", ft_printf("null str test: %s\n", null_str));
	printf(">stdio printf->");
	printf("return count is %i\n", printf("null str test: %s\n", null_str));

	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf-> ");
	ft_printf("return count is %i\n", ft_printf("%p | %p\n", LONG_MAX, LONG_MIN));
	printf(">stdio printf->");
	printf("return count is %i\n", printf("%p | %p\n", LONG_MAX, LONG_MIN));


	printf("\n-----------------------------------------------------\n");
	ft_printf(">my printf-> ");
	ft_printf("return count is %i\n", ft_printf("%"));
	printf("\n");
	printf(">stdio printf->");
	printf("return count is %i\n", printf("%"));

	printf("%d\n", 0x144);
	ft_printf("%d\n", 0x144);

	printf("%d\n", 042);
	ft_printf("%d\n", 042);




	return (0);
}
