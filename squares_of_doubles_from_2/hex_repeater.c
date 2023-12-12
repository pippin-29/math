/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_repeater.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhadding <operas.referee.0e@icloud.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 07:57:18 by dhadding          #+#    #+#             */
/*   Updated: 2023/12/13 07:58:45 by dhadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int main(void)
{
	unsigned long long i;
	int kl;
	unsigned long long result;

	kl = 0;
	i = 2;
	while (kl != (32))
	{
		result = i * i;
		printf("%lld * %lld = %llx\n", i, i, result);
		i *= 2;
		kl++;
	}
	return (0);
}