/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meunostu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 09:37:28 by meunostu          #+#    #+#             */
/*   Updated: 2020/12/18 09:37:32 by meunostu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int sum2(int n, va_list factor)
{
	int sum;

	sum = 0;
	while (n--)
		sum += va_arg(factor, int);  // получаем значение текущего параметра типа int;
	return (sum);
}

int sum (int n, ...)
{
	int result = 0;
	va_list factor;         //указатель va_list
	va_start(factor, n);    // устанавливаем указатель
	result = sum2(n, factor);
	va_end(factor); // завершаем обработку параметров
	return result;
}

//int	main (int argc, char *argv[])
//{
//	printf("%d \n", sum(4, 1, 2, 3, 4));
//	printf("%d \n", sum(5, 12, 21, 13, 4, 5));
//	if (argc == 2)
//	{
//		printf("The argument supplied is %s\n", argv[1]);
//	}
//	else if (argc > 2)
//	{
//		printf("Too many arguments supplied.\n");
//	}
//	else
//	{
//		printf("One argument expected.\n");
//	}
//}
