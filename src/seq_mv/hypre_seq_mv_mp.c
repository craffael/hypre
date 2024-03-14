/******************************************************************************
 * Copyright (c) 1998 Lawrence Livermore National Security, LLC and other
 * HYPRE Project Developers. See the top-level COPYRIGHT file for details.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR MIT)
 ******************************************************************************/

/******************************************************************************
 *
 * hypre seq_mv mixed-precision interface
 *
 *****************************************************************************/

#include "_hypre_utilities.h"
#include "hypre_seq_mv_mp.h"
#include "hypre_utilities_mup.h"

#if defined(HYPRE_MIXED_PRECISION)

/******************************************************************************
 *
 * Member functions for hypre_Vector class.
 *
 *****************************************************************************/

/*--------------------------------------------------------------------------
 * Mixed precision hypre_SeqVectorCopy
 * copies data from x to y
 * if size of x is larger than y only the first size_y elements of x are
 * copied to y
 *--------------------------------------------------------------------------*/
HYPRE_Int
hypre_SeqVectorCopy_mp( hypre_Vector_mp *x,
                     hypre_Vector_mp *y )
{
/*
#ifdef HYPRE_PROFILE
   hypre_profile_times[HYPRE_TIMER_ID_BLAS1] -= hypre_MPI_Wtime();
#endif

   hypre_GpuProfilingPushRange("SeqVectorCopy");
*/
   /* determine type of output vector data  ==> Precision of y. */
   HYPRE_Precision precision = hypre_VectorPrecision (y);

   HYPRE_Int      i; 
   HYPRE_Int      ierr = 0;             

   size_t size = hypre_min(hypre_VectorSize(x), hypre_VectorSize(y)) * hypre_VectorNumVectors(x);
/*
  if(precision == HYPRE_REAL_SINGLE)
   {
      hypre_double *x_data = hypre_VectorData(x);
      hypre_float *y_data = hypre_VectorData(y);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            y_data[i] = (hypre_float)x_data[i];   
   }
   else if(precision == HYPRE_REAL_DOUBLE)
   {
      hypre_float *x_data = (hypre_float *)hypre_VectorData(x);
      hypre_double *y_data = hypre_VectorData(y);   
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
//         for (i = 0; i < size; i++)
//            y_data[i] = (hypre_double)x_data[i]; 
         for (i = 0; i < size; i++)
//            (hypre_VectorData(y))[i] = (hypre_double)(hypre_VectorData(x))[i];
            ((hypre_double *)y->data)[i] = (hypre_double)((hypre_float *)(x->data))[i];         
   }
   else if(precision == HYPRE_REAL_LONGDOUBLE)
   {
      hypre_double *x_data = hypre_VectorData(x);
      hypre_long_double *y_data = hypre_VectorData(y);   
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            y_data[i] = (hypre_long_double)x_data[i]; 
   }
   else
   {
         hypre_printf_dbl("Error: Undefined precision type for Vector Copy! \n");
         ierr = 2;   
   }
*/


   switch (precision)
   {
      case HYPRE_REAL_SINGLE:
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            ((hypre_float *)hypre_VectorData(y))[i] = (hypre_float)((hypre_double *)hypre_VectorData(x))[i];
      break;
      case HYPRE_REAL_DOUBLE:
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            ((hypre_double *)hypre_VectorData(y))[i] = (hypre_double)((hypre_float *)hypre_VectorData(x))[i];
      break;      	
      case HYPRE_REAL_LONGDOUBLE:
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            ((hypre_long_double *)hypre_VectorData(y))[i] = (hypre_long_double)((hypre_double *)hypre_VectorData(x))[i];
      break;
      default:
//         hypre_error_w_msg(HYPRE_ERROR_GENERIC, "Error: Undefined precision type for Vector Copy!\n");
         hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type for Vector Copy!\n");
   }
   
/*
#ifdef HYPRE_PROFILE
   hypre_profile_times[HYPRE_TIMER_ID_BLAS1] += hypre_MPI_Wtime();
#endif
   hypre_GpuProfilingPopRange();
*/
   return hypre_error_flag;
}

/*--------------------------------------------------------------------------
 * Mixed-precision hypre_SeqVectorAxpy
 *--------------------------------------------------------------------------*/

HYPRE_Int
hypre_SeqVectorAxpy_mp( hypre_double alpha,
                     hypre_Vector_mp *x,
                     hypre_Vector_mp *y     )
{
/*
#ifdef HYPRE_PROFILE
   hypre_profile_times[HYPRE_TIMER_ID_BLAS1] -= hypre_MPI_Wtime();
#endif
*/
   /* determine type of output vector data  ==> Precision of y. */
   HYPRE_Precision precision = hypre_VectorPrecision (y);

   HYPRE_Int      size   = hypre_VectorSize(x);          
   HYPRE_Int      i;           
   size *=hypre_VectorNumVectors(x);

   switch (precision)
   {
      case HYPRE_REAL_SINGLE:
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            ((hypre_float *)hypre_VectorData(y))[i] += (hypre_float)(alpha * ((hypre_double *)hypre_VectorData(x))[i]);
      break;
      case HYPRE_REAL_DOUBLE:
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            ((hypre_double *)hypre_VectorData(y))[i] += (hypre_double)(alpha * ((hypre_float *)hypre_VectorData(x))[i]);
      break;      	
      case HYPRE_REAL_LONGDOUBLE:
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
         for (i = 0; i < size; i++)
            ((hypre_long_double *)hypre_VectorData(y))[i] += (hypre_long_double)(alpha * ((hypre_double *)hypre_VectorData(x))[i]);
      break;
      default:
//         hypre_error_w_msg(HYPRE_ERROR_GENERIC, "Error: Undefined precision type for Vector Axpy!\n");
         hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type for Vector Axpy!\n");
   }
/*
#ifdef HYPRE_PROFILE
   hypre_profile_times[HYPRE_TIMER_ID_BLAS1] += hypre_MPI_Wtime();
#endif
*/
   return hypre_error_flag;
}

/*--------------------------------------------------------------------------
 * Convert precision in a mixed precision vector
 *--------------------------------------------------------------------------*/

HYPRE_Int
hypre_SeqVectorConvert_mp (hypre_Vector_mp *v,
                           HYPRE_Precision new_precision)
{
   HYPRE_Precision precision = hypre_VectorPrecision (v);
   void *data = hypre_VectorData(v);
   void *data_mp = NULL;
   HYPRE_Int size = hypre_VectorSize(v);
   HYPRE_MemoryLocation memory_location = hypre_VectorMemoryLocation(v);
   HYPRE_Int i;

   if (new_precision == precision)
      return hypre_error_flag;
   else
   {
      switch (precision)
      {
         case HYPRE_REAL_SINGLE:
         {
            switch (new_precision)
            {
               case HYPRE_REAL_DOUBLE:
               {
                  data_mp = (double *) malloc(size* sizeof(double));
                  //data_mp = hypre_TAlloc(hypre_double, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_double *)data_mp)[i] = (hypre_double) ((hypre_float *) data)[i];
               }
               break;
               case HYPRE_REAL_LONGDOUBLE:
               {
                  //data_mp = hypre_TAlloc(hypre_long_double, size, memory_location);
                  data_mp = (long double *) malloc(size* sizeof(long double));
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_long_double *)data_mp)[i] = (hypre_long_double) ((hypre_float *) data)[i];
               }
               break;
               default:
                  hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
            }
         }
         break;
         case HYPRE_REAL_DOUBLE:
         {
            switch (new_precision)
            {
               case HYPRE_REAL_SINGLE:
               {
                  //data_mp = hypre_TAlloc(hypre_float, size, memory_location);
                  data_mp = (float *) malloc(size* sizeof(float));
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_float *)data_mp)[i] = (hypre_float) ((hypre_double *) data)[i];
               }
               break;
               case HYPRE_REAL_LONGDOUBLE:
               {
                  data_mp = (long double *) malloc(size*sizeof(long double));
                  //data_mp = hypre_TAlloc(hypre_long_double, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_long_double *)data_mp)[i] = (hypre_long_double) ((hypre_double *) data)[i];
               }
               break;
               default:
                  hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
            }
         }
         break;
         case HYPRE_REAL_LONGDOUBLE:
         {
            switch (new_precision)
            {
               case HYPRE_REAL_SINGLE:
               {
                  data_mp = (float *) malloc(size*sizeof(float));
                  //data_mp = hypre_TAlloc(hypre_float, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_float *)data_mp)[i] = (hypre_float) ((hypre_long_double *) data)[i];
               }
               break;
               case HYPRE_REAL_DOUBLE:
               {
                  data_mp = (double*) malloc(size* sizeof(double));
                  //data_mp = hypre_TAlloc(hypre_double, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_double *)data_mp)[i] = (hypre_double) ((hypre_long_double *) data)[i];
               }
               break;
               default:
                  hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
            }
         }
         break;
         default:
            hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
      }
      free(data);
      hypre_VectorData(v) = data_mp;
      hypre_VectorPrecision(v) = new_precision;
   }
   return hypre_error_flag;
}

/*--------------------------------------------------------------------------
 * Convert precision in a mixed precision matrix
 *--------------------------------------------------------------------------*/

HYPRE_Int
hypre_CSRMatrixConvert_mp (hypre_CSRMatrix_mp *A,
                           HYPRE_Precision new_precision)
{
   HYPRE_Precision precision = hypre_CSRMatrixPrecision (A);
   void *data = hypre_CSRMatrixData(A);
   void *data_mp = NULL;
   HYPRE_Int size = hypre_CSRMatrixI(A)[hypre_CSRMatrixNumRows(A)];
   HYPRE_MemoryLocation memory_location = hypre_CSRMatrixMemoryLocation(A);
   HYPRE_Int i;

   if (new_precision == precision)
      return hypre_error_flag;
   else
   {
      switch (precision)
      {
         case HYPRE_REAL_SINGLE:
         {
            switch (new_precision)
            {
               case HYPRE_REAL_DOUBLE:
               {
                  data_mp = (double *) malloc(size* sizeof(double));
                  //data_mp = hypre_TAlloc(hypre_double, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_double *)data_mp)[i] = (hypre_double) ((hypre_float *) data)[i];
               }
               break;
               case HYPRE_REAL_LONGDOUBLE:
               {
                  //data_mp = hypre_TAlloc(hypre_long_double, size, memory_location);
                  data_mp = (long double *) malloc(size* sizeof(long double));
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_long_double *)data_mp)[i] = (hypre_long_double) ((hypre_float *) data)[i];
               }
               break;
               default:
                  hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
            }
         }
         break;
         case HYPRE_REAL_DOUBLE:
         {
            switch (new_precision)
            {
               case HYPRE_REAL_SINGLE:
               {
                  //data_mp = hypre_TAlloc(hypre_float, size, memory_location);
                  data_mp = (float *) malloc(size* sizeof(float));
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_float *)data_mp)[i] = (hypre_float) ((hypre_double *) data)[i];
               }
               break;
               case HYPRE_REAL_LONGDOUBLE:
               {
                  data_mp = (long double *) malloc(size*sizeof(long double));
                  //data_mp = hypre_TAlloc(hypre_long_double, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_long_double *)data_mp)[i] = (hypre_long_double) ((hypre_double *) data)[i];
               }
               break;
               default:
                  hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
            }
         }
         break;
         case HYPRE_REAL_LONGDOUBLE:
         {
            switch (new_precision)
            {
               case HYPRE_REAL_SINGLE:
               {
                  data_mp = (float *) malloc(size*sizeof(float));
                  //data_mp = hypre_TAlloc(hypre_float, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_float *)data_mp)[i] = (hypre_float) ((hypre_long_double *) data)[i];
               }
               break;
               case HYPRE_REAL_DOUBLE:
               {
                  data_mp = (double*) malloc(size* sizeof(double));
                  //data_mp = hypre_TAlloc(hypre_double, size, memory_location);
#ifdef HYPRE_USING_OPENMP
#pragma omp parallel for private(i) HYPRE_SMP_SCHEDULE
#endif
                  for (i = 0; i < size; i++)
                     ((hypre_double *)data_mp)[i] = (hypre_double) ((hypre_long_double *) data)[i];
               }
               break;
               default:
                  hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
            }
         }
         break;
         default:
            hypre_error_w_msg_mp(HYPRE_ERROR_GENERIC, "Error: Undefined precision type!\n");
      }
      free(data);
      hypre_CSRMatrixData(A) = data_mp;
      hypre_CSRMatrixPrecision(A) = new_precision;
   }
   return hypre_error_flag;
}

#endif