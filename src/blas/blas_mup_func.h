/*** DO NOT EDIT THIS FILE DIRECTLY (use 'mup_func_header' to generate) ***/

/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 * Header file for transforming multiprecision functions names
 *****************************************************************************/

#ifndef BLAS_MUP_FUNC_HEADER
#define BLAS_MUP_FUNC_HEADER

#include "HYPRE_utilities.h"

#define hypre_dasum HYPRE_MULTIPRECISION_FUNC ( hypre_dasum )
#define hypre_daxpy HYPRE_MULTIPRECISION_FUNC ( hypre_daxpy )
#define hypre_dcopy HYPRE_MULTIPRECISION_FUNC ( hypre_dcopy )
#define hypre_ddot HYPRE_MULTIPRECISION_FUNC ( hypre_ddot )
#define hypre_dgemm HYPRE_MULTIPRECISION_FUNC ( hypre_dgemm )
#define hypre_dgemv HYPRE_MULTIPRECISION_FUNC ( hypre_dgemv )
#define hypre_dger HYPRE_MULTIPRECISION_FUNC ( hypre_dger )
#define hypre_dnrm2 HYPRE_MULTIPRECISION_FUNC ( hypre_dnrm2 )
#define hypre_drot HYPRE_MULTIPRECISION_FUNC ( hypre_drot )
#define hypre_dscal HYPRE_MULTIPRECISION_FUNC ( hypre_dscal )
#define hypre_dswap HYPRE_MULTIPRECISION_FUNC ( hypre_dswap )
#define hypre_dsymm HYPRE_MULTIPRECISION_FUNC ( hypre_dsymm )
#define hypre_dsymv HYPRE_MULTIPRECISION_FUNC ( hypre_dsymv )
#define hypre_dsyr2 HYPRE_MULTIPRECISION_FUNC ( hypre_dsyr2 )
#define hypre_dsyr2k HYPRE_MULTIPRECISION_FUNC ( hypre_dsyr2k )
#define hypre_dsyrk HYPRE_MULTIPRECISION_FUNC ( hypre_dsyrk )
#define hypre_dtrmm HYPRE_MULTIPRECISION_FUNC ( hypre_dtrmm )
#define hypre_dtrmv HYPRE_MULTIPRECISION_FUNC ( hypre_dtrmv )
#define hypre_dtrsm HYPRE_MULTIPRECISION_FUNC ( hypre_dtrsm )
#define hypre_dtrsv HYPRE_MULTIPRECISION_FUNC ( hypre_dtrsv )
#define hypre_d_lg10 HYPRE_MULTIPRECISION_FUNC ( hypre_d_lg10 )
#define hypre_d_sign HYPRE_MULTIPRECISION_FUNC ( hypre_d_sign )
#define hypre_pow_dd HYPRE_MULTIPRECISION_FUNC ( hypre_pow_dd )
#define hypre_pow_di HYPRE_MULTIPRECISION_FUNC ( hypre_pow_di )
#define hypre_idamax HYPRE_MULTIPRECISION_FUNC ( hypre_idamax )

#endif
