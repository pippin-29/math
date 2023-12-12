/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 07:27:03 by dhadding          #+#    #+#             */
/*   Updated: 2023/12/13 07:56:08 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int main(void)
{
	double i;
	int kl;
	double result;

	kl = 0;
	i = 2;
	while (kl != (1024))
	{
		result = i * i;
		printf("\n%f * %f = %f\n", i, i, result);
		i *= 2;
		kl++;
	}
	return (0);
}