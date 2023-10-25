/*** DO NOT EDIT THIS FILE DIRECTLY (use 'utilities_func_header' to generate) ***/

/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 * Header file for transforming multiprecision functions names
 *****************************************************************************/

#ifndef UTILITIES_MUP_FUNC_HEADER
#define UTILITIES_MUP_FUNC_HEADER

#include "multiprecision.h"

#define hypre_create_elt HYPRE_MULTIPRECISION_FUNC ( hypre_create_elt )
#define hypre_dispose_elt HYPRE_MULTIPRECISION_FUNC ( hypre_dispose_elt )
#define hypre_enter_on_lists HYPRE_MULTIPRECISION_FUNC ( hypre_enter_on_lists )
#define hypre_remove_point HYPRE_MULTIPRECISION_FUNC ( hypre_remove_point )
#define HYPRE_AssumedPartitionCheck HYPRE_MULTIPRECISION_FUNC ( HYPRE_AssumedPartitionCheck )
#define hypre_BigBinarySearch HYPRE_MULTIPRECISION_FUNC ( hypre_BigBinarySearch )
#define hypre_BigLowerBound HYPRE_MULTIPRECISION_FUNC ( hypre_BigLowerBound )
#define hypre_BinarySearch HYPRE_MULTIPRECISION_FUNC ( hypre_BinarySearch )
#define hypre_BinarySearch2 HYPRE_MULTIPRECISION_FUNC ( hypre_BinarySearch2 )
#define hypre_LowerBound HYPRE_MULTIPRECISION_FUNC ( hypre_LowerBound )
#if defined (HYPRE_COMPLEX)
#define hypre_cabs HYPRE_MULTIPRECISION_FUNC ( hypre_cabs )
#endif
#if defined (HYPRE_COMPLEX)
#define hypre_cimag HYPRE_MULTIPRECISION_FUNC ( hypre_cimag )
#endif
#if defined (HYPRE_COMPLEX)
#define hypre_conj HYPRE_MULTIPRECISION_FUNC ( hypre_conj )
#endif
#if defined (HYPRE_COMPLEX)
#define hypre_creal HYPRE_MULTIPRECISION_FUNC ( hypre_creal )
#endif
#if defined (HYPRE_COMPLEX)
#define hypre_csqrt HYPRE_MULTIPRECISION_FUNC ( hypre_csqrt )
#endif
#define hypre_bind_device HYPRE_MULTIPRECISION_FUNC ( hypre_bind_device )
#define HYPRE_CheckError HYPRE_MULTIPRECISION_FUNC ( HYPRE_CheckError )
#define HYPRE_ClearAllErrors HYPRE_MULTIPRECISION_FUNC ( HYPRE_ClearAllErrors )
#define HYPRE_ClearError HYPRE_MULTIPRECISION_FUNC ( HYPRE_ClearError )
#define HYPRE_DescribeError HYPRE_MULTIPRECISION_FUNC ( HYPRE_DescribeError )
#define hypre_error_handler HYPRE_MULTIPRECISION_FUNC ( hypre_error_handler )
#define HYPRE_GetError HYPRE_MULTIPRECISION_FUNC ( HYPRE_GetError )
#define HYPRE_GetErrorArg HYPRE_MULTIPRECISION_FUNC ( HYPRE_GetErrorArg )
#define HYPRE_GetErrorMessages HYPRE_MULTIPRECISION_FUNC ( HYPRE_GetErrorMessages )
#define HYPRE_PrintErrorMessages HYPRE_MULTIPRECISION_FUNC ( HYPRE_PrintErrorMessages )
#define HYPRE_SetPrintErrorMode HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetPrintErrorMode )
#define hypre_CreateBinaryTree HYPRE_MULTIPRECISION_FUNC ( hypre_CreateBinaryTree )
#define hypre_DataExchangeList HYPRE_MULTIPRECISION_FUNC ( hypre_DataExchangeList )
#define hypre_DestroyBinaryTree HYPRE_MULTIPRECISION_FUNC ( hypre_DestroyBinaryTree )
#define hypre_checkerror HYPRE_MULTIPRECISION_FUNC ( hypre_checkerror )
#define hypre_clearallerrors HYPRE_MULTIPRECISION_FUNC ( hypre_clearallerrors )
#define hypre_clearerror HYPRE_MULTIPRECISION_FUNC ( hypre_clearerror )
#define hypre_geterror HYPRE_MULTIPRECISION_FUNC ( hypre_geterror )
#define hypre_geterrorarg HYPRE_MULTIPRECISION_FUNC ( hypre_geterrorarg )
#define hypre_finalize HYPRE_MULTIPRECISION_FUNC ( hypre_finalize )
#define hypre_init HYPRE_MULTIPRECISION_FUNC ( hypre_init )
#define hypre_initialize HYPRE_MULTIPRECISION_FUNC ( hypre_initialize )
#define hypre_setexecutionpolicy HYPRE_MULTIPRECISION_FUNC ( hypre_setexecutionpolicy )
#define hypre_setmemorylocation HYPRE_MULTIPRECISION_FUNC ( hypre_setmemorylocation )
#define hypre_setspgemmusevendor HYPRE_MULTIPRECISION_FUNC ( hypre_setspgemmusevendor )
#define utilities_FortranMatrixAdd HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixAdd )
#define utilities_FortranMatrixAllocateData HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixAllocateData )
#define utilities_FortranMatrixClear HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixClear )
#define utilities_FortranMatrixClearL HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixClearL )
#define utilities_FortranMatrixCopy HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixCopy )
#define utilities_FortranMatrixCreate HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixCreate )
#define utilities_FortranMatrixDestroy HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixDestroy )
#define utilities_FortranMatrixDMultiply HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixDMultiply )
#define utilities_FortranMatrixFNorm HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixFNorm )
#define utilities_FortranMatrixGetDiagonal HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixGetDiagonal )
#define utilities_FortranMatrixGlobalHeight HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixGlobalHeight )
#define utilities_FortranMatrixHeight HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixHeight )
#define utilities_FortranMatrixIndexCopy HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixIndexCopy )
#define utilities_FortranMatrixMaxValue HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixMaxValue )
#define utilities_FortranMatrixMultiply HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixMultiply )
#define utilities_FortranMatrixMultiplyD HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixMultiplyD )
#define utilities_FortranMatrixPrint HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixPrint )
#define utilities_FortranMatrixSelectBlock HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSelectBlock )
#define utilities_FortranMatrixSetDiagonal HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSetDiagonal )
#define utilities_FortranMatrixSetToIdentity HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSetToIdentity )
#define utilities_FortranMatrixSymmetrize HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixSymmetrize )
#define utilities_FortranMatrixTransposeSquare HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixTransposeSquare )
#define utilities_FortranMatrixUpperInv HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixUpperInv )
#define utilities_FortranMatrixValue HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixValue )
#define utilities_FortranMatrixValuePtr HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixValuePtr )
#define utilities_FortranMatrixValues HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixValues )
#define utilities_FortranMatrixWidth HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixWidth )
#define utilities_FortranMatrixWrap HYPRE_MULTIPRECISION_FUNC ( utilities_FortranMatrixWrap )
#define HYPRE_Finalize HYPRE_MULTIPRECISION_FUNC ( HYPRE_Finalize )
#define hypre_GetDevice HYPRE_MULTIPRECISION_FUNC ( hypre_GetDevice )
#define hypre_GetDeviceCount HYPRE_MULTIPRECISION_FUNC ( hypre_GetDeviceCount )
#define hypre_GetDeviceLastError HYPRE_MULTIPRECISION_FUNC ( hypre_GetDeviceLastError )
#define hypre_GetDeviceMaxShmemSize HYPRE_MULTIPRECISION_FUNC ( hypre_GetDeviceMaxShmemSize )
#define HYPRE_GetExecutionPolicy HYPRE_MULTIPRECISION_FUNC ( HYPRE_GetExecutionPolicy )
#define HYPRE_GetExecutionPolicyName HYPRE_MULTIPRECISION_FUNC ( HYPRE_GetExecutionPolicyName )
#define HYPRE_GetMemoryLocation HYPRE_MULTIPRECISION_FUNC ( HYPRE_GetMemoryLocation )
#define hypre_handle HYPRE_MULTIPRECISION_FUNC ( hypre_handle )
#define hypre_HandleCreate HYPRE_MULTIPRECISION_FUNC ( hypre_HandleCreate )
#define hypre_HandleDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_HandleDestroy )
#define HYPRE_Initialize HYPRE_MULTIPRECISION_FUNC ( HYPRE_Initialize )
#define HYPRE_PrintDeviceInfo HYPRE_MULTIPRECISION_FUNC ( HYPRE_PrintDeviceInfo )
#define hypre_SetDevice HYPRE_MULTIPRECISION_FUNC ( hypre_SetDevice )
#define HYPRE_SetExecutionPolicy HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetExecutionPolicy )
#define HYPRE_SetMemoryLocation HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetMemoryLocation )
#define hypre_SetGaussSeidelMethod HYPRE_MULTIPRECISION_FUNC ( hypre_SetGaussSeidelMethod )
#define hypre_SetSpGemmAlgorithm HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpGemmAlgorithm )
#define hypre_SetSpGemmBinned HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpGemmBinned )
#define hypre_SetSpGemmRownnzEstimateMethod HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpGemmRownnzEstimateMethod )
#define hypre_SetSpGemmRownnzEstimateMultFactor HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpGemmRownnzEstimateMultFactor )
#define hypre_SetSpGemmRownnzEstimateNSamples HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpGemmRownnzEstimateNSamples )
#define hypre_SetSpGemmUseVendor HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpGemmUseVendor )
#define hypre_SetSpMVUseVendor HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpMVUseVendor )
#define hypre_SetSpTransUseVendor HYPRE_MULTIPRECISION_FUNC ( hypre_SetSpTransUseVendor )
#define hypre_SetUseGpuRand HYPRE_MULTIPRECISION_FUNC ( hypre_SetUseGpuRand )
#define hypre_SetUserDeviceMalloc HYPRE_MULTIPRECISION_FUNC ( hypre_SetUserDeviceMalloc )
#define hypre_SetUserDeviceMfree HYPRE_MULTIPRECISION_FUNC ( hypre_SetUserDeviceMfree )
#define hypre_UnorderedBigIntMapCreate HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedBigIntMapCreate )
#define hypre_UnorderedBigIntMapDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedBigIntMapDestroy )
#define hypre_UnorderedBigIntSetCopyToArray HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedBigIntSetCopyToArray )
#define hypre_UnorderedBigIntSetCreate HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedBigIntSetCreate )
#define hypre_UnorderedBigIntSetDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedBigIntSetDestroy )
#define hypre_UnorderedIntMapCreate HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedIntMapCreate )
#define hypre_UnorderedIntMapDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedIntMapDestroy )
#define hypre_UnorderedIntSetCopyToArray HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedIntSetCopyToArray )
#define hypre_UnorderedIntSetCreate HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedIntSetCreate )
#define hypre_UnorderedIntSetDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_UnorderedIntSetDestroy )
#define HYPRE_SetSpGemmUseVendor HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetSpGemmUseVendor )
#define HYPRE_SetSpMVUseVendor HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetSpMVUseVendor )
#define HYPRE_SetSpTransUseVendor HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetSpTransUseVendor )
#define HYPRE_SetUseGpuRand HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetUseGpuRand )
#define HYPRE_Version HYPRE_MULTIPRECISION_FUNC ( HYPRE_Version )
#define HYPRE_VersionNumber HYPRE_MULTIPRECISION_FUNC ( HYPRE_VersionNumber )
#define hypre_IntArrayCloneDeep HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayCloneDeep )
#define hypre_IntArrayCloneDeep_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayCloneDeep_v2 )
#define hypre_IntArrayCopy HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayCopy )
#define hypre_IntArrayCount HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayCount )
#define hypre_IntArrayCountHost HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayCountHost )
#define hypre_IntArrayCreate HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayCreate )
#define hypre_IntArrayDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayDestroy )
#define hypre_IntArrayInitialize HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayInitialize )
#define hypre_IntArrayInitialize_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayInitialize_v2 )
#define hypre_IntArrayInverseMapping HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayInverseMapping )
#define hypre_IntArrayInverseMappingHost HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayInverseMappingHost )
#define hypre_IntArrayMigrate HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayMigrate )
#define hypre_IntArrayNegate HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayNegate )
#define hypre_IntArrayPrint HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayPrint )
#define hypre_IntArrayRead HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayRead )
#define hypre_IntArraySetConstantValues HYPRE_MULTIPRECISION_FUNC ( hypre_IntArraySetConstantValues )
#define hypre_IntArraySetConstantValuesHost HYPRE_MULTIPRECISION_FUNC ( hypre_IntArraySetConstantValuesHost )
#define hypre_IntArraySetInterleavedValues HYPRE_MULTIPRECISION_FUNC ( hypre_IntArraySetInterleavedValues )
#define hypre_IntArraySetInterleavedValuesHost HYPRE_MULTIPRECISION_FUNC ( hypre_IntArraySetInterleavedValuesHost )
#define hypre_Log2 HYPRE_MULTIPRECISION_FUNC ( hypre_Log2 )
#define hypre_MatrixStatsArrayCreate HYPRE_MULTIPRECISION_FUNC ( hypre_MatrixStatsArrayCreate )
#define hypre_MatrixStatsArrayDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_MatrixStatsArrayDestroy )
#define hypre_MatrixStatsArrayPrint HYPRE_MULTIPRECISION_FUNC ( hypre_MatrixStatsArrayPrint )
#define hypre_MatrixStatsCreate HYPRE_MULTIPRECISION_FUNC ( hypre_MatrixStatsCreate )
#define hypre_MatrixStatsDestroy HYPRE_MULTIPRECISION_FUNC ( hypre_MatrixStatsDestroy )
#define hypre_CAlloc HYPRE_MULTIPRECISION_FUNC ( hypre_CAlloc )
#define hypre_CheckMemoryLocation HYPRE_MULTIPRECISION_FUNC ( hypre_CheckMemoryLocation )
#define _hypre_Free HYPRE_MULTIPRECISION_FUNC ( _hypre_Free )
#define hypre_Free HYPRE_MULTIPRECISION_FUNC ( hypre_Free )
#define hypre_GetExecPolicy1 HYPRE_MULTIPRECISION_FUNC ( hypre_GetExecPolicy1 )
#define hypre_GetExecPolicy2 HYPRE_MULTIPRECISION_FUNC ( hypre_GetExecPolicy2 )
#define hypre_GetMemoryLocationName HYPRE_MULTIPRECISION_FUNC ( hypre_GetMemoryLocationName )
#define hypre_GetPointerLocation HYPRE_MULTIPRECISION_FUNC ( hypre_GetPointerLocation )
#define _hypre_MAlloc HYPRE_MULTIPRECISION_FUNC ( _hypre_MAlloc )
#define hypre_MAlloc HYPRE_MULTIPRECISION_FUNC ( hypre_MAlloc )
#define hypre_Memcpy HYPRE_MULTIPRECISION_FUNC ( hypre_Memcpy )
#define hypre_MemPrefetch HYPRE_MULTIPRECISION_FUNC ( hypre_MemPrefetch )
#define hypre_Memset HYPRE_MULTIPRECISION_FUNC ( hypre_Memset )
#define hypre_ReAlloc HYPRE_MULTIPRECISION_FUNC ( hypre_ReAlloc )
#define hypre_ReAlloc_v2 HYPRE_MULTIPRECISION_FUNC ( hypre_ReAlloc_v2 )
#define hypre_SetCubMemPoolSize HYPRE_MULTIPRECISION_FUNC ( hypre_SetCubMemPoolSize )
#define HYPRE_SetGPUMemoryPoolSize HYPRE_MULTIPRECISION_FUNC ( HYPRE_SetGPUMemoryPoolSize )
#define hypre_big_merge_sort HYPRE_MULTIPRECISION_FUNC ( hypre_big_merge_sort )
#define hypre_big_sort_and_create_inverse_map HYPRE_MULTIPRECISION_FUNC ( hypre_big_sort_and_create_inverse_map )
#define hypre_IntArrayMergeOrdered HYPRE_MULTIPRECISION_FUNC ( hypre_IntArrayMergeOrdered )
#define hypre_merge_sort HYPRE_MULTIPRECISION_FUNC ( hypre_merge_sort )
#define hypre_sort_and_create_inverse_map HYPRE_MULTIPRECISION_FUNC ( hypre_sort_and_create_inverse_map )
#define hypre_union2 HYPRE_MULTIPRECISION_FUNC ( hypre_union2 )
#define hypre_mm_is_valid HYPRE_MULTIPRECISION_FUNC ( hypre_mm_is_valid )
#define hypre_mm_read_banner HYPRE_MULTIPRECISION_FUNC ( hypre_mm_read_banner )
#define hypre_mm_read_mtx_crd_size HYPRE_MULTIPRECISION_FUNC ( hypre_mm_read_mtx_crd_size )
#define hypre_MPI_Abort HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Abort )
#define hypre_MPI_Address HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Address )
#define hypre_MPI_Allgather HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Allgather )
#define hypre_MPI_Allgatherv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Allgatherv )
#define hypre_MPI_Allreduce HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Allreduce )
#define hypre_MPI_Alltoall HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Alltoall )
#define hypre_MPI_Barrier HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Barrier )
#define hypre_MPI_Bcast HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Bcast )
#define hypre_MPI_Comm_create HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_create )
#define hypre_MPI_Comm_dup HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_dup )
#define hypre_MPI_Comm_f2c HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_f2c )
#define hypre_MPI_Comm_free HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_free )
#define hypre_MPI_Comm_group HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_group )
#define hypre_MPI_Comm_rank HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_rank )
#define hypre_MPI_Comm_size HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_size )
#define hypre_MPI_Comm_split HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Comm_split )
#define hypre_MPI_Finalize HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Finalize )
#define hypre_MPI_Gather HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Gather )
#define hypre_MPI_Gatherv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Gatherv )
#define hypre_MPI_Get_count HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Get_count )
#define hypre_MPI_Group_free HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Group_free )
#define hypre_MPI_Group_incl HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Group_incl )
#define hypre_MPI_Init HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Init )
#define hypre_MPI_Iprobe HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Iprobe )
#define hypre_MPI_Irecv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Irecv )
#define hypre_MPI_Irsend HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Irsend )
#define hypre_MPI_Isend HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Isend )
#define hypre_MPI_Op_create HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Op_create )
#define hypre_MPI_Op_free HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Op_free )
#define hypre_MPI_Probe HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Probe )
#define hypre_MPI_Recv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Recv )
#define hypre_MPI_Recv_init HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Recv_init )
#define hypre_MPI_Reduce HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Reduce )
#define hypre_MPI_Request_free HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Request_free )
#define hypre_MPI_Scan HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Scan )
#define hypre_MPI_Scatter HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Scatter )
#define hypre_MPI_Scatterv HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Scatterv )
#define hypre_MPI_Send HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Send )
#define hypre_MPI_Send_init HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Send_init )
#define hypre_MPI_Startall HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Startall )
#define hypre_MPI_Test HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Test )
#define hypre_MPI_Testall HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Testall )
#define hypre_MPI_Type_commit HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Type_commit )
#define hypre_MPI_Type_contiguous HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Type_contiguous )
#define hypre_MPI_Type_free HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Type_free )
#define hypre_MPI_Type_hvector HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Type_hvector )
#define hypre_MPI_Type_struct HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Type_struct )
#define hypre_MPI_Type_vector HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Type_vector )
#define hypre_MPI_Wait HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Wait )
#define hypre_MPI_Waitall HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Waitall )
#define hypre_MPI_Waitany HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Waitany )
#define hypre_MPI_Wtick HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Wtick )
#define hypre_MPI_Wtime HYPRE_MULTIPRECISION_FUNC ( hypre_MPI_Wtime )
#define hypre_GpuProfilingPopRange HYPRE_MULTIPRECISION_FUNC ( hypre_GpuProfilingPopRange )
#define hypre_GpuProfilingPushRange HYPRE_MULTIPRECISION_FUNC ( hypre_GpuProfilingPushRange )
#define hypre_GpuProfilingPushRangeColor HYPRE_MULTIPRECISION_FUNC ( hypre_GpuProfilingPushRangeColor )
#define hypre_prefix_sum HYPRE_MULTIPRECISION_FUNC ( hypre_prefix_sum )
#define hypre_prefix_sum_multiple HYPRE_MULTIPRECISION_FUNC ( hypre_prefix_sum_multiple )
#define hypre_prefix_sum_pair HYPRE_MULTIPRECISION_FUNC ( hypre_prefix_sum_pair )
#define hypre_prefix_sum_triple HYPRE_MULTIPRECISION_FUNC ( hypre_prefix_sum_triple )
#define free_format HYPRE_MULTIPRECISION_FUNC ( free_format )
#define hypre_fprintf HYPRE_MULTIPRECISION_FUNC ( hypre_fprintf )
#define hypre_fscanf HYPRE_MULTIPRECISION_FUNC ( hypre_fscanf )
#define hypre_ndigits HYPRE_MULTIPRECISION_FUNC ( hypre_ndigits )
#define hypre_ParPrintf HYPRE_MULTIPRECISION_FUNC ( hypre_ParPrintf )
#define hypre_printf HYPRE_MULTIPRECISION_FUNC ( hypre_printf )
#define hypre_scanf HYPRE_MULTIPRECISION_FUNC ( hypre_scanf )
#define hypre_snprintf HYPRE_MULTIPRECISION_FUNC ( hypre_snprintf )
#define hypre_sprintf HYPRE_MULTIPRECISION_FUNC ( hypre_sprintf )
#define hypre_sscanf HYPRE_MULTIPRECISION_FUNC ( hypre_sscanf )
#define new_format HYPRE_MULTIPRECISION_FUNC ( new_format )
#define hypre_BigQsort0 HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsort0 )
#define hypre_BigQsort1 HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsort1 )
#define hypre_BigQsort2i HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsort2i )
#define hypre_BigQsort4_abs HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsort4_abs )
#define hypre_BigQsortb2i HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsortb2i )
#define hypre_BigQsortbi HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsortbi )
#define hypre_BigQsortbLoc HYPRE_MULTIPRECISION_FUNC ( hypre_BigQsortbLoc )
#define hypre_BigSwap HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap )
#define hypre_BigSwap2 HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap2 )
#define hypre_BigSwap2i HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap2i )
#define hypre_BigSwap4_d HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwap4_d )
#define hypre_BigSwapb2i HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwapb2i )
#define hypre_BigSwapbi HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwapbi )
#define hypre_BigSwapLoc HYPRE_MULTIPRECISION_FUNC ( hypre_BigSwapLoc )
#define hypre_dense_topo_sort HYPRE_MULTIPRECISION_FUNC ( hypre_dense_topo_sort )
#define hypre_qsort0 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort0 )
#define hypre_qsort1 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort1 )
#define hypre_qsort2 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort2 )
#define hypre_qsort2_abs HYPRE_MULTIPRECISION_FUNC ( hypre_qsort2_abs )
#define hypre_qsort2i HYPRE_MULTIPRECISION_FUNC ( hypre_qsort2i )
#define hypre_qsort3 HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3 )
#define hypre_qsort3_abs HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3_abs )
#define hypre_qsort3i HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3i )
#define hypre_qsort3ir HYPRE_MULTIPRECISION_FUNC ( hypre_qsort3ir )
#define hypre_qsort_abs HYPRE_MULTIPRECISION_FUNC ( hypre_qsort_abs )
#define hypre_swap HYPRE_MULTIPRECISION_FUNC ( hypre_swap )
#define hypre_swap2 HYPRE_MULTIPRECISION_FUNC ( hypre_swap2 )
#define hypre_swap2i HYPRE_MULTIPRECISION_FUNC ( hypre_swap2i )
#define hypre_swap3_d HYPRE_MULTIPRECISION_FUNC ( hypre_swap3_d )
#define hypre_swap3_d_perm HYPRE_MULTIPRECISION_FUNC ( hypre_swap3_d_perm )
#define hypre_swap3i HYPRE_MULTIPRECISION_FUNC ( hypre_swap3i )
#define hypre_swap_c HYPRE_MULTIPRECISION_FUNC ( hypre_swap_c )
#define hypre_swap_d HYPRE_MULTIPRECISION_FUNC ( hypre_swap_d )
#define hypre_topo_sort HYPRE_MULTIPRECISION_FUNC ( hypre_topo_sort )
#define hypre_DoubleQuickSplit HYPRE_MULTIPRECISION_FUNC ( hypre_DoubleQuickSplit )
#define hypre_Rand HYPRE_MULTIPRECISION_FUNC ( hypre_Rand )
#define hypre_RandI HYPRE_MULTIPRECISION_FUNC ( hypre_RandI )
#define hypre_SeedRand HYPRE_MULTIPRECISION_FUNC ( hypre_SeedRand )
#define hypre_Finalized HYPRE_MULTIPRECISION_FUNC ( hypre_Finalized )
#define HYPRE_Finalized HYPRE_MULTIPRECISION_FUNC ( HYPRE_Finalized )
#define hypre_Initialized HYPRE_MULTIPRECISION_FUNC ( hypre_Initialized )
#define HYPRE_Initialized HYPRE_MULTIPRECISION_FUNC ( HYPRE_Initialized )
#define hypre_SetFinalized HYPRE_MULTIPRECISION_FUNC ( hypre_SetFinalized )
#define hypre_SetInitialized HYPRE_MULTIPRECISION_FUNC ( hypre_SetInitialized )
#define hypre_GetSimpleThreadPartition HYPRE_MULTIPRECISION_FUNC ( hypre_GetSimpleThreadPartition )
#define time_getCPUSeconds HYPRE_MULTIPRECISION_FUNC ( time_getCPUSeconds )
#define time_getWallclockSeconds HYPRE_MULTIPRECISION_FUNC ( time_getWallclockSeconds )
#if defined (HYPRE_TIMING)
#define hypre_BeginTiming HYPRE_MULTIPRECISION_FUNC ( hypre_BeginTiming )
#endif
#if defined (HYPRE_TIMING)
#define hypre_ClearTiming HYPRE_MULTIPRECISION_FUNC ( hypre_ClearTiming )
#endif
#if defined (HYPRE_TIMING)
#define hypre_EndTiming HYPRE_MULTIPRECISION_FUNC ( hypre_EndTiming )
#endif
#define hypre_FinalizeAllTimings HYPRE_MULTIPRECISION_FUNC ( hypre_FinalizeAllTimings )
#if defined (HYPRE_TIMING)
#define hypre_FinalizeTiming HYPRE_MULTIPRECISION_FUNC ( hypre_FinalizeTiming )
#endif
#if defined (HYPRE_TIMING)
#define hypre_GetTiming HYPRE_MULTIPRECISION_FUNC ( hypre_GetTiming )
#endif
#if defined (HYPRE_TIMING)
#define hypre_IncFLOPCount HYPRE_MULTIPRECISION_FUNC ( hypre_IncFLOPCount )
#endif
#if defined (HYPRE_TIMING)
#define hypre_InitializeTiming HYPRE_MULTIPRECISION_FUNC ( hypre_InitializeTiming )
#endif
#if defined (HYPRE_TIMING)
#define hypre_PrintTiming HYPRE_MULTIPRECISION_FUNC ( hypre_PrintTiming )
#endif
#define hypre_CheckDirExists HYPRE_MULTIPRECISION_FUNC ( hypre_CheckDirExists )
#define hypre_CreateDir HYPRE_MULTIPRECISION_FUNC ( hypre_CreateDir )
#define hypre_CreateNextDirOfSequence HYPRE_MULTIPRECISION_FUNC ( hypre_CreateNextDirOfSequence )
#define hypre_multmod HYPRE_MULTIPRECISION_FUNC ( hypre_multmod )
#define hypre_partition1D HYPRE_MULTIPRECISION_FUNC ( hypre_partition1D )
#define hypre_strcpy HYPRE_MULTIPRECISION_FUNC ( hypre_strcpy )

#endif
