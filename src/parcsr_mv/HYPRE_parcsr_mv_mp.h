/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 *
 * Header file for HYPRE_parcsr_mv library
 *
 *****************************************************************************/

#ifndef HYPRE_PARCSR_MV_MP_HEADER
#define HYPRE_PARCSR_MV_MP_HEADER

#include "_hypre_parcsr_mv.h"

#ifdef HYPRE_MIXED_PRECISION

#ifdef __cplusplus
extern "C" {
#endif

HYPRE_Int HYPRE_ParVectorCopy_mp( HYPRE_ParVector x, HYPRE_ParVector y );

HYPRE_Int HYPRE_ParVectorConvert_mp( HYPRE_ParVector v, HYPRE_Precision new_precision );

HYPRE_Int HYPRE_ParCSRMatrixConvert_mp( HYPRE_ParCSRMatrix A, HYPRE_Precision new_precision );

#ifdef __cplusplus
}
#endif

#endif

#endif