/*** DO NOT EDIT THIS FILE DIRECTLY (use 'seq_mv_func_header' to generate) ***/

/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 * Header file for transforming multiprecision functions names
 *****************************************************************************/

#ifndef SEQ_MV_MUP_FUNC_HEADER
#define SEQ_MV_MUP_FUNC_HEADER

#include "multiprecision.h"

#define hypre_CSRMatrixAdd HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixAdd )
#define hypre_CSRMatrixAddFirstPass HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixAddFirstPass )
#define hypre_CSRMatrixAddHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixAddHost )
#define hypre_CSRMatrixAddPartial HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixAddPartial )
#define hypre_CSRMatrixAddSecondPass HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixAddSecondPass )
#define hypre_CSRMatrixComputeRowSum HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixComputeRowSum )
#define hypre_CSRMatrixComputeRowSumHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixComputeRowSumHost )
#define hypre_CSRMatrixDeleteZeros HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixDeleteZeros )
#define hypre_CSRMatrixDiagScale HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixDiagScale )
#define hypre_CSRMatrixDiagScaleHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixDiagScaleHost )
#define hypre_CSRMatrixExtractDiagonal HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixExtractDiagonal )
#define hypre_CSRMatrixExtractDiagonalHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixExtractDiagonalHost )
#define hypre_CSRMatrixFnorm HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixFnorm )
#define hypre_CSRMatrixMultiply HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMultiply )
#define hypre_CSRMatrixMultiplyHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMultiplyHost )
#define hypre_CSRMatrixReorder HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixReorder )
#define hypre_CSRMatrixReorderHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixReorderHost )
#define hypre_CSRMatrixScale HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixScale )
#define hypre_CSRMatrixSetConstantValues HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSetConstantValues )
#define hypre_CSRMatrixSplit HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSplit )
#define hypre_CSRMatrixSumElts HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSumElts )
#define hypre_CSRMatrixTranspose HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixTranspose )
#define hypre_CSRMatrixTransposeHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixTransposeHost )
#define hypre_CSRMatrixBigInitialize HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixBigInitialize )
#define hypre_CSRMatrixBigJtoJ HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixBigJtoJ )
#define hypre_CSRMatrixCheckSetNumNonzeros HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixCheckSetNumNonzeros )
#define hypre_CSRMatrixClone HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixClone )
#define hypre_CSRMatrixClone_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixClone_v2 )
#define hypre_CSRMatrixCopy HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixCopy )
#define hypre_CSRMatrixCreate HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixCreate )
#define hypre_CSRMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixDestroy )
#define hypre_CSRMatrixGetLoadBalancedPartitionBegin HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixGetLoadBalancedPartitionBegin )
#define hypre_CSRMatrixGetLoadBalancedPartitionEnd HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixGetLoadBalancedPartitionEnd )
#define hypre_CSRMatrixInitialize HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixInitialize )
#define hypre_CSRMatrixInitialize_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixInitialize_v2 )
#define hypre_CSRMatrixJtoBigJ HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixJtoBigJ )
#define hypre_CSRMatrixMigrate HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMigrate )
#define hypre_CSRMatrixPermute HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPermute )
#define hypre_CSRMatrixPermuteHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPermuteHost )
#define hypre_CSRMatrixPrefetch HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPrefetch )
#define hypre_CSRMatrixPrint HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPrint )
#define hypre_CSRMatrixPrintHB HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPrintHB )
#define hypre_CSRMatrixPrintIJ HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPrintIJ )
#define hypre_CSRMatrixPrintMM HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixPrintMM )
#define hypre_CSRMatrixRead HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixRead )
#define hypre_CSRMatrixResize HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixResize )
#define hypre_CSRMatrixSetDataOwner HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSetDataOwner )
#define hypre_CSRMatrixSetPatternOnly HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSetPatternOnly )
#define hypre_CSRMatrixSetRownnz HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSetRownnz )
#define hypre_CSRMatrixSetRownnzHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixSetRownnzHost )
#define hypre_CSRMatrixUnion HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixUnion )
#define hypre_CSRMatrixMatvec HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMatvec )
#define hypre_CSRMatrixMatvec_FF HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMatvec_FF )
#define hypre_CSRMatrixMatvecOutOfPlace HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMatvecOutOfPlace )
#define hypre_CSRMatrixMatvecOutOfPlaceHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMatvecOutOfPlaceHost )
#define hypre_CSRMatrixMatvecT HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMatvecT )
#define hypre_CSRMatrixMatvecTHost HYPRE_MULTIPRECISION_FUNC ( hypre_CSRMatrixMatvecTHost )
#define hypre_GenerateLocalPartitioning HYPRE_MULTIPRECISION_FUNC ( hypre_GenerateLocalPartitioning )
#define hypre_GeneratePartitioning HYPRE_MULTIPRECISION_FUNC ( hypre_GeneratePartitioning )
#define HYPRE_CSRMatrixCreate HYPRE_MULTIPRECISION_FUNC ( HYPRE_CSRMatrixCreate )
#define HYPRE_CSRMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_CSRMatrixDestroy )
#define HYPRE_CSRMatrixGetNumRows HYPRE_MULTIPRECISION_FUNC ( HYPRE_CSRMatrixGetNumRows )
#define HYPRE_CSRMatrixInitialize HYPRE_MULTIPRECISION_FUNC ( HYPRE_CSRMatrixInitialize )
#define HYPRE_CSRMatrixPrint HYPRE_MULTIPRECISION_FUNC ( HYPRE_CSRMatrixPrint )
#define HYPRE_CSRMatrixRead HYPRE_MULTIPRECISION_FUNC ( HYPRE_CSRMatrixRead )
#define HYPRE_MappedMatrixAssemble HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixAssemble )
#define HYPRE_MappedMatrixCreate HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixCreate )
#define HYPRE_MappedMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixDestroy )
#define HYPRE_MappedMatrixGetColIndex HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixGetColIndex )
#define HYPRE_MappedMatrixGetMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixGetMatrix )
#define HYPRE_MappedMatrixInitialize HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixInitialize )
#define HYPRE_MappedMatrixLimitedDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixLimitedDestroy )
#define HYPRE_MappedMatrixPrint HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixPrint )
#define HYPRE_MappedMatrixSetColMap HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixSetColMap )
#define HYPRE_MappedMatrixSetMapData HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixSetMapData )
#define HYPRE_MappedMatrixSetMatrix HYPRE_MULTIPRECISION_FUNC ( HYPRE_MappedMatrixSetMatrix )
#define HYPRE_MultiblockMatrixAssemble HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixAssemble )
#define HYPRE_MultiblockMatrixCreate HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixCreate )
#define HYPRE_MultiblockMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixDestroy )
#define HYPRE_MultiblockMatrixInitialize HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixInitialize )
#define HYPRE_MultiblockMatrixLimitedDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixLimitedDestroy )
#define HYPRE_MultiblockMatrixPrint HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixPrint )
#define HYPRE_MultiblockMatrixSetNumSubmatrices HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixSetNumSubmatrices )
#define HYPRE_MultiblockMatrixSetSubmatrixType HYPRE_MULTIPRECISION_FUNC ( HYPRE_MultiblockMatrixSetSubmatrixType )
#define HYPRE_VectorCreate HYPRE_MULTIPRECISION_FUNC ( HYPRE_VectorCreate )
#define HYPRE_VectorDestroy HYPRE_MULTIPRECISION_FUNC ( HYPRE_VectorDestroy )
#define HYPRE_VectorInitialize HYPRE_MULTIPRECISION_FUNC ( HYPRE_VectorInitialize )
#define HYPRE_VectorPrint HYPRE_MULTIPRECISION_FUNC ( HYPRE_VectorPrint )
#define HYPRE_VectorRead HYPRE_MULTIPRECISION_FUNC ( HYPRE_VectorRead )
#define hypre_MappedMatrixAssemble HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixAssemble )
#define hypre_MappedMatrixCreate HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixCreate )
#define hypre_MappedMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixDestroy )
#define hypre_MappedMatrixGetColIndex HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixGetColIndex )
#define hypre_MappedMatrixGetMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixGetMatrix )
#define hypre_MappedMatrixInitialize HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixInitialize )
#define hypre_MappedMatrixLimitedDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixLimitedDestroy )
#define hypre_MappedMatrixPrint HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixPrint )
#define hypre_MappedMatrixSetColMap HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixSetColMap )
#define hypre_MappedMatrixSetMapData HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixSetMapData )
#define hypre_MappedMatrixSetMatrix HYPRE_MULTIPRECISION_FUNC ( hypre_MappedMatrixSetMatrix )
#define hypre_MultiblockMatrixAssemble HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixAssemble )
#define hypre_MultiblockMatrixCreate HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixCreate )
#define hypre_MultiblockMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixDestroy )
#define hypre_MultiblockMatrixInitialize HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixInitialize )
#define hypre_MultiblockMatrixLimitedDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixLimitedDestroy )
#define hypre_MultiblockMatrixPrint HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixPrint )
#define hypre_MultiblockMatrixSetNumSubmatrices HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixSetNumSubmatrices )
#define hypre_MultiblockMatrixSetSubmatrix HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixSetSubmatrix )
#define hypre_MultiblockMatrixSetSubmatrixType HYPRE_MULTIPRECISION_FUNC ( hypre_MultiblockMatrixSetSubmatrixType )
#define hypre_SeqVectorMassAxpy HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassAxpy )
#define hypre_SeqVectorMassAxpy4 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassAxpy4 )
#define hypre_SeqVectorMassAxpy8 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassAxpy8 )
#define hypre_SeqVectorMassDotpTwo HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassDotpTwo )
#define hypre_SeqVectorMassDotpTwo4 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassDotpTwo4 )
#define hypre_SeqVectorMassDotpTwo8 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassDotpTwo8 )
#define hypre_SeqVectorMassInnerProd HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassInnerProd )
#define hypre_SeqVectorMassInnerProd4 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassInnerProd4 )
#define hypre_SeqVectorMassInnerProd8 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMassInnerProd8 )
#define hypre_SeqMultiVectorCreate HYPRE_MULTIPRECISION_FUNC ( hypre_SeqMultiVectorCreate )
#define hypre_SeqVectorAxpy HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorAxpy )
#define hypre_SeqVectorAxpyHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorAxpyHost )
#define hypre_SeqVectorAxpyz HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorAxpyz )
#define hypre_SeqVectorAxpyzHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorAxpyzHost )
#define hypre_SeqVectorCloneDeep HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorCloneDeep )
#define hypre_SeqVectorCloneDeep_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorCloneDeep_v2 )
#define hypre_SeqVectorCloneShallow HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorCloneShallow )
#define hypre_SeqVectorCopy HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorCopy )
#define hypre_SeqVectorCreate HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorCreate )
#define hypre_SeqVectorDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorDestroy )
#define hypre_SeqVectorElmdivpy HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorElmdivpy )
#define hypre_SeqVectorElmdivpyHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorElmdivpyHost )
#define hypre_SeqVectorElmdivpyMarked HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorElmdivpyMarked )
#define hypre_SeqVectorInitialize HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorInitialize )
#define hypre_SeqVectorInitialize_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorInitialize_v2 )
#define hypre_SeqVectorInnerProd HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorInnerProd )
#define hypre_SeqVectorInnerProdHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorInnerProdHost )
#define hypre_SeqVectorMigrate HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorMigrate )
#define hypre_SeqVectorPrint HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorPrint )
#define hypre_SeqVectorRead HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorRead )
#define hypre_SeqVectorResize HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorResize )
#define hypre_SeqVectorScale HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorScale )
#define hypre_SeqVectorScaleHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorScaleHost )
#define hypre_SeqVectorSetConstantValues HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSetConstantValues )
#define hypre_SeqVectorSetConstantValuesHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSetConstantValuesHost )
#define hypre_SeqVectorSetDataOwner HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSetDataOwner )
#define hypre_SeqVectorSetRandomValues HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSetRandomValues )
#define hypre_SeqVectorSetSize HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSetSize )
#define hypre_SeqVectorSumElts HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSumElts )
#define hypre_SeqVectorSumEltsHost HYPRE_MULTIPRECISION_FUNC ( hypre_SeqVectorSumEltsHost )

#endif