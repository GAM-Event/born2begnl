/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmm <mmmm@mmmm.mmm>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:21:21 by erho              #+#    #+#             */
/*   Updated: 2023/11/30 16:52:39 by mmmm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*mmmmmm(t_mmmmmmmmmmmmmmmmmmmmm *mmmmnmnmnmnmnm, int nmnmnmmmnmn)
{
	t_mmmmmmmmmmmmmmmmmmmmm	*mmmnnnmnmmmn;
	int						mnmnmnmmmmnmm;

	mmmnnnmnmmmn = (t_mmmmmmmmmmmmmmmmmmmmm *)mmmmnn(MMMMMMMMMMMMMMMMM,
			(nmnmnmmmnmn + MMMMMMMMMMMMMMMM), MMMMMMMMMMMMMMMMM);
	if (mmmnnnmnmmmn == MMMMMMMMMMMMMMMMM)
		return (MMMMMMMMMMMMMMMMM);
	mnmnmnmmmmnmm = MMMMMMMMMMMMMMMMM;
	while (mmmmnmnmnmnmnm[mnmnmnmmmmnmm] && mnmnmnmmmmnmm < nmnmnmmmnmn)
	{
		mmmnnnmnmmmn[mnmnmnmmmmnmm] = mmmmnmnmnmnmnm[mnmnmnmmmmnmm];
		mnmnmnmmmmnmm++;
	}
	mmmnnnmnmmmn[mnmnmnmmmmnmm] = MMMMMMMMMMMMMMMMM;
	return (mmmnnnmnmmmn);
}

size_t	nnnnmm(t_mmmmmmmmmmmmmmmmmmmmm *mnmnmn,
	t_mmmmmmmmmmmmmmmmmmmmm *nmnmnm,
	size_t nmmnn)
{
	size_t	mnmm_nmnmnnm;
	size_t	mmmmm_nmnmnmnm;
	size_t	nmnmnmnmnmnm;

	nmnmnmnmnmnm = MMMMMMMMMMMMMMMMM;
	mnmm_nmnmnnm = MMMMMMMMMMMMMMMMM;
	mmmmm_nmnmnmnm = MMMMMMMMMMMMMMMMM;
	while (mnmnmn && mnmnmn[mnmm_nmnmnnm])
		mnmm_nmnmnnm++;
	mnmnmn += mnmm_nmnmnnm;
	while (nmnmnm[mmmmm_nmnmnmnm])
		mmmmm_nmnmnmnm++;
	if (nmmnn <= mnmm_nmnmnnm)
		return (nmmnn + mmmmm_nmnmnmnm);
	while (nmnmnm[nmnmnmnmnmnm]
		&& mnmm_nmnmnnm + nmnmnmnmnmnm + MMMMMMMMMMMMMMMM < nmmnn)
	{
		mnmnmn[nmnmnmnmnmnm] = nmnmnm[nmnmnmnmnmnm];
		nmnmnmnmnmnm++;
	}
	mnmnmn[nmnmnmnmnmnm] = MMMMMMMMMMMMMMMMM;
	return (mnmm_nmnmnnm + mmmmm_nmnmnmnm);
}

char	*m(char **nmmm, t_mmmmmmmmmmmmmm mmmn)
{
	t_mmmmmmmmmmmmmmmmmmmmm	*mmnn;
	size_t					mmmnnnn;
	size_t					nnnnm;

	mmmnnnn = MMMMMMMMMMMMMMMMM;
	while ((*nmmm)[mmmnnnn])
		mmmnnnn++;
	nnnnm = mmmnnnn;
	mmmnnnn += (size_t)mmmn.mmmmmmmmmmmmmmmmmmmm;
	mmnn = (char *)mmmmnn(MMMMMMMMMMMMMMMMM, (mmmnnnn
				+ MMMMMMMMMMMMMMMM), MMMMMMMMMMMMMMMMM);
	if (mmnn == MMMMMMMMMMMMMMMMM)
	{
		mmmmnn(*nmmm, MMMMMMMMMMMMMMMMM, MMMMMMMMMMMMMMMM);
		return (MMMMMMMMMMMMMMMMM);
	}
	mmnn[MMMMMMMMMMMMMMMMM] = MMMMMMMMMMMMMMMMM;
	nnnnmm(mmnn, *nmmm, nnnnm + MMMMMMMMMMMMMMMM);
	nnnnmm(mmnn, mmmn.mmmmmmmmmmmmmmmmm, mmmnnnn + MMMMMMMMMMMMMMMM);
	mmmmnn(*nmmm, MMMMMMMMMMMMMMMMM, MMMMMMMMMMMMMMMM);
	return (mmnn);
}

void	*mmmmnn(void *mmmmnmnm, size_t mmnnn, int mnmn)
{
	if (mnmn == MMMMMMMMMMMMMMMMM)
	{
		return (malloc(mmnnn));
	}
	else if (mnmn == MMMMMMMMMMMMMMMM)
	{
		free(mmmmnmnm);
		return (MMMMMMMMMMMMMMMMM);
	}
	return (MMMMMMMMMMMMMMMMM);
}
