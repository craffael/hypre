/* sidl/babel_internal.h.  Generated by configure.  */
/* sidl/babel_internal.h.in.  Generated from configure.ac by autoheader.  */


#ifndef included_babel_internal_h
#define included_babel_internal_h


/* Hexified form of release number: 2 hex digits each for major, minor,
   bugfix, and alpha/beta/candidate/distributed */
#ifndef BABEL_VERSION_HEX
#define BABEL_VERSION_HEX 0x01000400
#endif

/* Define to 1 if the `closedir' function returns void instead of `int'. */
#ifndef CLOSEDIR_VOID
/* #undef CLOSEDIR_VOID */
#endif

/* If defined, C++ support was disabled at configure time */
#ifndef CXX_DISABLED
/* #undef CXX_DISABLED */
#endif

/* Define to dummy `main' function (if any) required to link to the Fortran 77
   libraries. */
#ifndef F77_DUMMY_MAIN
/* #undef F77_DUMMY_MAIN */
#endif

/* A macro for making F90 variables volatile (i.e., subject to changes the
   compiler cannot predict. This is necessary for array access via the access
   method. */
#ifndef F90_VOLATILE
#define F90_VOLATILE volatile ::
#endif

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
#ifndef FC_DUMMY_MAIN
/* #undef FC_DUMMY_MAIN */
#endif

/* Define if F77 and FC dummy `main' functions are identical. */
#ifndef FC_DUMMY_MAIN_EQ_F77
/* #undef FC_DUMMY_MAIN_EQ_F77 */
#endif

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#ifndef FC_FUNC
#define FC_FUNC(name,NAME) name ## _
#endif

/* As FC_FUNC, but for C identifiers containing underscores. */
#ifndef FC_FUNC_
#define FC_FUNC_(name,NAME) name ## __
#endif

/* Define to alternate name for `main' routine that is called from a `main' in
   the Fortran libraries. */
#ifndef FC_MAIN
#define FC_MAIN MAIN_
#endif

/* If defined, Fortran support was disabled at configure time */
#ifndef FORTRAN77_DISABLED
/* #undef FORTRAN77_DISABLED */
#endif

/* If defined, F90 support was disabled at configure time */
#ifndef FORTRAN90_DISABLED
/* #undef FORTRAN90_DISABLED */
#endif

/* Define to 1 if you have the `argz_append' function. */
#ifndef HAVE_ARGZ_APPEND
#define HAVE_ARGZ_APPEND 1
#endif

/* Define to 1 if you have the `argz_create_sep' function. */
#ifndef HAVE_ARGZ_CREATE_SEP
#define HAVE_ARGZ_CREATE_SEP 1
#endif

/* Define to 1 if you have the <argz.h> header file. */
#ifndef HAVE_ARGZ_H
#define HAVE_ARGZ_H 1
#endif

/* Define to 1 if you have the `argz_insert' function. */
#ifndef HAVE_ARGZ_INSERT
#define HAVE_ARGZ_INSERT 1
#endif

/* Define to 1 if you have the `argz_next' function. */
#ifndef HAVE_ARGZ_NEXT
#define HAVE_ARGZ_NEXT 1
#endif

/* Define to 1 if you have the `argz_stringify' function. */
#ifndef HAVE_ARGZ_STRINGIFY
#define HAVE_ARGZ_STRINGIFY 1
#endif

/* Define to 1 if you have the <assert.h> header file. */
#ifndef HAVE_ASSERT_H
#define HAVE_ASSERT_H 1
#endif

/* Define to 1 if you have the `atexit' function. */
#ifndef HAVE_ATEXIT
#define HAVE_ATEXIT 1
#endif

/* Define to 1 if you have the `bcopy' function. */
#ifndef HAVE_BCOPY
/* #undef HAVE_BCOPY */
#endif

/* Define to 1 if you have the `bzero' function. */
#ifndef HAVE_BZERO
#define HAVE_BZERO 1
#endif

/* Define to 1 if you have the `closedir' function. */
#ifndef HAVE_CLOSEDIR
#define HAVE_CLOSEDIR 1
#endif

/* define if the compiler has complex<T> */
#ifndef HAVE_COMPLEX
#define HAVE_COMPLEX 
#endif

/* define if the compiler has complex math functions */
#ifndef HAVE_COMPLEX_MATH1
#define HAVE_COMPLEX_MATH1 
#endif

/* define if the compiler has more complex math functions */
#ifndef HAVE_COMPLEX_MATH2
/* #undef HAVE_COMPLEX_MATH2 */
#endif

/* define if complex math functions are in std:: */
#ifndef HAVE_COMPLEX_MATH_IN_NAMESPACE_STD
#define HAVE_COMPLEX_MATH_IN_NAMESPACE_STD 
#endif

/* Define to 1 if you have the <ctype.h> header file. */
#ifndef HAVE_CTYPE_H
#define HAVE_CTYPE_H 1
#endif

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#ifndef HAVE_DIRENT_H
#define HAVE_DIRENT_H 1
#endif

/* Define if you have the GNU dld library. */
#ifndef HAVE_DLD
/* #undef HAVE_DLD */
#endif

/* Define to 1 if you have the <dld.h> header file. */
#ifndef HAVE_DLD_H
/* #undef HAVE_DLD_H */
#endif

/* Define to 1 if you have the `dlerror' function. */
#ifndef HAVE_DLERROR
#define HAVE_DLERROR 1
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
#ifndef HAVE_DLFCN_H
#define HAVE_DLFCN_H 1
#endif

/* Define to 1 if you have the <dl.h> header file. */
#ifndef HAVE_DL_H
/* #undef HAVE_DL_H */
#endif

/* Define if you have the _dyld_func_lookup function. */
#ifndef HAVE_DYLD
/* #undef HAVE_DYLD */
#endif

/* Define to 1 if you have the <errno.h> header file. */
#ifndef HAVE_ERRNO_H
#define HAVE_ERRNO_H 1
#endif

/* Define to 1 if the system has the type `error_t'. */
#ifndef HAVE_ERROR_T
#define HAVE_ERROR_T 1
#endif

/* Define to 1 if you have the <float.h> header file. */
#ifndef HAVE_FLOAT_H
#define HAVE_FLOAT_H 1
#endif

/* Define to 1 if you have the `fork' function. */
#ifndef HAVE_FORK
#define HAVE_FORK 1
#endif

/* Define to 1 if you have the `getcwd' function. */
#ifndef HAVE_GETCWD
#define HAVE_GETCWD 1
#endif

/* define if the compiler supports IEEE math library */
#ifndef HAVE_IEEE_MATH
#define HAVE_IEEE_MATH 
#endif

/* Define to 1 if you have the `index' function. */
#ifndef HAVE_INDEX
/* #undef HAVE_INDEX */
#endif

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef HAVE_INTTYPES_H
#define HAVE_INTTYPES_H 1
#endif

/* Define if you have the libdl library or equivalent. */
#ifndef HAVE_LIBDL
#define HAVE_LIBDL 1
#endif

/* Libxml2 support included */
#ifndef HAVE_LIBXML2
#define HAVE_LIBXML2 1
#endif

/* Define to 1 if you have the <limits.h> header file. */
#ifndef HAVE_LIMITS_H
#define HAVE_LIMITS_H 1
#endif

/* define if long long is a built in type */
#ifndef HAVE_LONG_LONG
#define HAVE_LONG_LONG 
#endif

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#ifndef HAVE_MACH_O_DYLD_H
/* #undef HAVE_MACH_O_DYLD_H */
#endif

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#ifndef HAVE_MALLOC
#define HAVE_MALLOC 1
#endif

/* Define to 1 if you have the <malloc.h> header file. */
#ifndef HAVE_MALLOC_H
#define HAVE_MALLOC_H 1
#endif

/* Define to 1 if you have the `memcpy' function. */
#ifndef HAVE_MEMCPY
#define HAVE_MEMCPY 1
#endif

/* Define to 1 if you have the `memmove' function. */
#ifndef HAVE_MEMMOVE
#define HAVE_MEMMOVE 1
#endif

/* Define to 1 if you have the <memory.h> header file. */
#ifndef HAVE_MEMORY_H
#define HAVE_MEMORY_H 1
#endif

/* Define to 1 if you have the `memset' function. */
#ifndef HAVE_MEMSET
#define HAVE_MEMSET 1
#endif

/* define if the compiler implements namespaces */
#ifndef HAVE_NAMESPACES
#define HAVE_NAMESPACES 
#endif

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#ifndef HAVE_NDIR_H
/* #undef HAVE_NDIR_H */
#endif

/* Define to 1 if you have the <netinet/in.h> header file. */
#ifndef HAVE_NETINET_IN_H
#define HAVE_NETINET_IN_H 1
#endif

/* define if the compiler has numeric_limits<T> */
#ifndef HAVE_NUMERIC_LIMITS
#define HAVE_NUMERIC_LIMITS 
#endif

/* Define to 1 if you have the `opendir' function. */
#ifndef HAVE_OPENDIR
#define HAVE_OPENDIR 1
#endif

/* Define if libtool can extract symbol lists from object files. */
#ifndef HAVE_PRELOADED_SYMBOLS
#define HAVE_PRELOADED_SYMBOLS 1
#endif

/* Define if you have POSIX threads libraries and header files. */
#ifndef HAVE_PTHREAD
#define HAVE_PTHREAD 1
#endif

/* Define to 1 if the system has the type `ptrdiff_t'. */
#ifndef HAVE_PTRDIFF_T
#define HAVE_PTRDIFF_T 1
#endif

/* Define to 1 if you have the `readdir' function. */
#ifndef HAVE_READDIR
#define HAVE_READDIR 1
#endif

/* Define to 1 if your system has a GNU libc compatible `realloc' function,
   and to 0 otherwise. */
#ifndef HAVE_REALLOC
#define HAVE_REALLOC 1
#endif

/* Define to 1 if you have the `rindex' function. */
#ifndef HAVE_RINDEX
/* #undef HAVE_RINDEX */
#endif

/* Define to 1 if you have the <sched.h> header file. */
#ifndef HAVE_SCHED_H
#define HAVE_SCHED_H 1
#endif

/* Define if you have the shl_load function. */
#ifndef HAVE_SHL_LOAD
/* #undef HAVE_SHL_LOAD */
#endif

/* Define to 1 if you have the `socket' function. */
#ifndef HAVE_SOCKET
#define HAVE_SOCKET 1
#endif

/* Define to 1 if `stat' has the bug that it succeeds when given the
   zero-length file name argument. */
#ifndef HAVE_STAT_EMPTY_STRING_BUG
/* #undef HAVE_STAT_EMPTY_STRING_BUG */
#endif

/* define if the compiler supports ISO C++ standard library */
#ifndef HAVE_STD
#define HAVE_STD 
#endif

/* Define to 1 if stdbool.h conforms to C99. */
#ifndef HAVE_STDBOOL_H
#define HAVE_STDBOOL_H 1
#endif

/* Define to 1 if you have the <stddef.h> header file. */
#ifndef HAVE_STDDEF_H
#define HAVE_STDDEF_H 1
#endif

/* Define to 1 if you have the <stdint.h> header file. */
#ifndef HAVE_STDINT_H
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdio.h> header file. */
#ifndef HAVE_STDIO_H
#define HAVE_STDIO_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#ifndef HAVE_STDLIB_H
#define HAVE_STDLIB_H 1
#endif

/* define if the compiler supports Standard Template Library */
#ifndef HAVE_STL
#define HAVE_STL 
#endif

/* Define to 1 if you have the `strchr' function. */
#ifndef HAVE_STRCHR
#define HAVE_STRCHR 1
#endif

/* Define to 1 if you have the `strcmp' function. */
#ifndef HAVE_STRCMP
#define HAVE_STRCMP 1
#endif

/* Define to 1 if you have the `strdup' function. */
#ifndef HAVE_STRDUP
#define HAVE_STRDUP 1
#endif

/* Define to 1 if you have the <strings.h> header file. */
#ifndef HAVE_STRINGS_H
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#ifndef HAVE_STRING_H
#define HAVE_STRING_H 1
#endif

/* Define to 1 if you have the `strrchr' function. */
#ifndef HAVE_STRRCHR
#define HAVE_STRRCHR 1
#endif

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#ifndef HAVE_SYS_DIR_H
/* #undef HAVE_SYS_DIR_H */
#endif

/* Define to 1 if you have the <sys/dl.h> header file. */
#ifndef HAVE_SYS_DL_H
/* #undef HAVE_SYS_DL_H */
#endif

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#ifndef HAVE_SYS_NDIR_H
/* #undef HAVE_SYS_NDIR_H */
#endif

/* Define to 1 if you have the <sys/select.h> header file. */
#ifndef HAVE_SYS_SELECT_H
#define HAVE_SYS_SELECT_H 1
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#ifndef HAVE_SYS_SOCKET_H
#define HAVE_SYS_SOCKET_H 1
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#ifndef HAVE_SYS_STAT_H
#define HAVE_SYS_STAT_H 1
#endif

/* Define to 1 if you have the <sys/time.h> header file. */
#ifndef HAVE_SYS_TIME_H
#define HAVE_SYS_TIME_H 1
#endif

/* Define to 1 if you have the <sys/types.h> header file. */
#ifndef HAVE_SYS_TYPES_H
#define HAVE_SYS_TYPES_H 1
#endif

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef HAVE_UNISTD_H
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the `vfork' function. */
#ifndef HAVE_VFORK
#define HAVE_VFORK 1
#endif

/* Define to 1 if you have the <vfork.h> header file. */
#ifndef HAVE_VFORK_H
/* #undef HAVE_VFORK_H */
#endif

/* Define to 1 if `fork' works. */
#ifndef HAVE_WORKING_FORK
#define HAVE_WORKING_FORK 1
#endif

/* Define to 1 if `vfork' works. */
#ifndef HAVE_WORKING_VFORK
#define HAVE_WORKING_VFORK 1
#endif

/* Define to 1 if the system has the type `_Bool'. */
#ifndef HAVE__BOOL
#define HAVE__BOOL 1
#endif

/* If defined, Java support was disabled at configure time */
#ifndef JAVA_DISABLED
/* #undef JAVA_DISABLED */
#endif

/* Fully qualified string name of the Java Virtual Machine shared library */
#ifndef JVM_SHARED_LIBRARY
#define JVM_SHARED_LIBRARY "/usr/apps/java/j2sdk1.4.2_05/jre/lib/i386/server/libjvm.so"
#endif

/* Version of libxml2 installed */
#ifndef LIBXML2_VERSION
#define LIBXML2_VERSION 2005010
#endif

/* Define to 1 if `lstat' dereferences a symlink specified with a trailing
   slash. */
#ifndef LSTAT_FOLLOWS_SLASHED_SYMLINK
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1
#endif

/* Define if the OS needs help to load dependent libraries for dlopen(). */
#ifndef LTDL_DLOPEN_DEPLIBS
/* #undef LTDL_DLOPEN_DEPLIBS */
#endif

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#ifndef LTDL_OBJDIR
#define LTDL_OBJDIR ".libs/"
#endif

/* Define to the name of the environment variable that determines the dynamic
   library search path. */
#ifndef LTDL_SHLIBPATH_VAR
#define LTDL_SHLIBPATH_VAR "LD_LIBRARY_PATH"
#endif

/* Define to the extension used for shared libraries, say, ".so". */
#ifndef LTDL_SHLIB_EXT
#define LTDL_SHLIB_EXT ".so"
#endif

/* Define to the system default library search path. */
#ifndef LTDL_SYSSEARCHPATH
#define LTDL_SYSSEARCHPATH "/lib:/usr/lib:/usr/lib64:/usr/kerberos/lib:/usr/X11R6/lib:/usr/lib/qt-3.1/lib"
#endif

/* Define if dlsym() requires a leading underscore in symbol names. */
#ifndef NEED_USCORE
/* #undef NEED_USCORE */
#endif

/* Name of package */
#ifndef PACKAGE
#define PACKAGE "babel-runtime"
#endif

/* Define to the address where bug reports for this package should be sent. */
#ifndef PACKAGE_BUGREPORT
#define PACKAGE_BUGREPORT "babel-bugs@cca-forum.org"
#endif

/* Define to the full name of this package. */
#ifndef PACKAGE_NAME
#define PACKAGE_NAME "babel-runtime"
#endif

/* Define to the full name and version of this package. */
#ifndef PACKAGE_STRING
#define PACKAGE_STRING "babel-runtime 1.0.4"
#endif

/* Define to the one symbol short name of this package. */
#ifndef PACKAGE_TARNAME
#define PACKAGE_TARNAME "babel-runtime"
#endif

/* Define to the version of this package. */
#ifndef PACKAGE_VERSION
#define PACKAGE_VERSION "1.0.4"
#endif

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
#ifndef PTHREAD_CREATE_JOINABLE
/* #undef PTHREAD_CREATE_JOINABLE */
#endif

/* If defined, Python support was disabled at configure time */
#ifndef PYTHON_DISABLED
/* #undef PYTHON_DISABLED */
#endif

/* If defined, server-side Python support was disabled at configure time */
#ifndef PYTHON_SERVER_DISABLED
/* #undef PYTHON_SERVER_DISABLED */
#endif

/* Fully qualified string name of the Python shared library */
#ifndef PYTHON_SHARED_LIBRARY
#define PYTHON_SHARED_LIBRARY "/home/painter/lib/libpython2.4.so"
#endif

/* Directory of the Python shared library */
#ifndef PYTHON_SHARED_LIBRARY_DIR
#define PYTHON_SHARED_LIBRARY_DIR "/home/painter/lib"
#endif

/* A string indicating the Python version number */
#ifndef PYTHON_VERSION
#define PYTHON_VERSION "2.4"
#endif

/* define if C++ requires old .h-style header includes */
#ifndef REQUIRE_OLD_CXX_HEADER_SUFFIX
/* #undef REQUIRE_OLD_CXX_HEADER_SUFFIX */
#endif

/* Define to the type of arg 1 for `select'. */
#ifndef SELECT_TYPE_ARG1
#define SELECT_TYPE_ARG1 int
#endif

/* Define to the type of args 2, 3 and 4 for `select'. */
#ifndef SELECT_TYPE_ARG234
#define SELECT_TYPE_ARG234 (fd_set *)
#endif

/* Define to the type of arg 5 for `select'. */
#ifndef SELECT_TYPE_ARG5
#define SELECT_TYPE_ARG5 (struct timeval *)
#endif

/* This should always be defined for Babel 0.11.0 and beyond */
#ifndef SIDL_CAST_INCREMENTS_REFCOUNT
#define SIDL_CAST_INCREMENTS_REFCOUNT 
#endif

/* Define to 1 if the C compiler supports inline. */
#ifndef SIDL_C_HAS_INLINE
#define SIDL_C_HAS_INLINE 1
#endif

/* Define SIDL_DYNAMIC_LIBRARY to force dynamic loading of libraries */
#ifndef SIDL_DYNAMIC_LIBRARY
/* #undef SIDL_DYNAMIC_LIBRARY */
#endif

/* F77 char args are strings */
#ifndef SIDL_F77_CHAR_AS_STRING
#define SIDL_F77_CHAR_AS_STRING 
#endif

/* F77 logical false value */
#ifndef SIDL_F77_FALSE
#define SIDL_F77_FALSE 0
#endif

/* F77 symbols are lower case */
#ifndef SIDL_F77_LOWER_CASE
#define SIDL_F77_LOWER_CASE 
#endif

/* F77 symbols are mixed case */
#ifndef SIDL_F77_MIXED_CASE
/* #undef SIDL_F77_MIXED_CASE */
#endif

/* one underscore after F77 symbols */
#ifndef SIDL_F77_ONE_UNDERSCORE
/* #undef SIDL_F77_ONE_UNDERSCORE */
#endif

/* F77 string length integer size */
#ifndef SIDL_F77_STR_INT_SIZE
#define SIDL_F77_STR_INT_SIZE int32_t
#endif

/* F77 string lengths at end of argument list */
#ifndef SIDL_F77_STR_LEN_FAR
#define SIDL_F77_STR_LEN_FAR 
#endif

/* F77 string lengths immediately follow string */
#ifndef SIDL_F77_STR_LEN_NEAR
/* #undef SIDL_F77_STR_LEN_NEAR */
#endif

/* Minimum size for out strings */
#ifndef SIDL_F77_STR_MINSIZE
#define SIDL_F77_STR_MINSIZE 512
#endif

/* F77 strings as length-char* structs */
#ifndef SIDL_F77_STR_STRUCT_LEN_STR
/* #undef SIDL_F77_STR_STRUCT_LEN_STR */
#endif

/* F77 strings as char*-length structs */
#ifndef SIDL_F77_STR_STRUCT_STR_LEN
/* #undef SIDL_F77_STR_STRUCT_STR_LEN */
#endif

/* F77 logical true value */
#ifndef SIDL_F77_TRUE
#define SIDL_F77_TRUE 1
#endif

/* two underscores after F77 symbols */
#ifndef SIDL_F77_TWO_UNDERSCORE
#define SIDL_F77_TWO_UNDERSCORE 
#endif

/* F77 symbols are upper case */
#ifndef SIDL_F77_UPPER_CASE
/* #undef SIDL_F77_UPPER_CASE */
#endif

/* no underscores after F77 symbols */
#ifndef SIDL_F77_ZERO_UNDERSCORE
/* #undef SIDL_F77_ZERO_UNDERSCORE */
#endif

/* Fortran 90 char args are strings */
#ifndef SIDL_F90_CHAR_AS_STRING
#define SIDL_F90_CHAR_AS_STRING 
#endif

/* Fortran 90 logical false value */
#ifndef SIDL_F90_FALSE
#define SIDL_F90_FALSE 0
#endif

/* Fortran 90 symbols are lower case */
#ifndef SIDL_F90_LOWER_CASE
#define SIDL_F90_LOWER_CASE 
#endif

/* Fortran 90 symbols are mixed case */
#ifndef SIDL_F90_MIXED_CASE
/* #undef SIDL_F90_MIXED_CASE */
#endif

/* one underscore after Fortran 90 symbols */
#ifndef SIDL_F90_ONE_UNDERSCORE
/* #undef SIDL_F90_ONE_UNDERSCORE */
#endif

/* Size in bytes for a F90 pointer to a derived type */
#ifndef SIDL_F90_POINTER_SIZE
#define SIDL_F90_POINTER_SIZE 4
#endif

/* F90 string length integer size */
#ifndef SIDL_F90_STR_INT_SIZE
#define SIDL_F90_STR_INT_SIZE int32_t
#endif

/* F90 string lengths at end of argument list */
#ifndef SIDL_F90_STR_LEN_FAR
#define SIDL_F90_STR_LEN_FAR 
#endif

/* F90 string lengths immediately follow string */
#ifndef SIDL_F90_STR_LEN_NEAR
/* #undef SIDL_F90_STR_LEN_NEAR */
#endif

/* Minimum size for out strings */
#ifndef SIDL_F90_STR_MINSIZE
#define SIDL_F90_STR_MINSIZE 512
#endif

/* F90 strings as length-char* structs */
#ifndef SIDL_F90_STR_STRUCT_LEN_STR
/* #undef SIDL_F90_STR_STRUCT_LEN_STR */
#endif

/* F90 strings as char*-length structs */
#ifndef SIDL_F90_STR_STRUCT_STR_LEN
/* #undef SIDL_F90_STR_STRUCT_STR_LEN */
#endif

/* Fortran 90 logical true value */
#ifndef SIDL_F90_TRUE
#define SIDL_F90_TRUE 1
#endif

/* two underscores after Fortran 90 symbols */
#ifndef SIDL_F90_TWO_UNDERSCORE
#define SIDL_F90_TWO_UNDERSCORE 
#endif

/* Fortran 90 symbols are upper case */
#ifndef SIDL_F90_UPPER_CASE
/* #undef SIDL_F90_UPPER_CASE */
#endif

/* no underscores after Fortran 90 symbols */
#ifndef SIDL_F90_ZERO_UNDERSCORE
/* #undef SIDL_F90_ZERO_UNDERSCORE */
#endif

/* the maximum size in bytes of a F90 array descriptor */
#ifndef SIDL_MAX_F90_DESCRIPTOR
#define SIDL_MAX_F90_DESCRIPTOR 96
#endif

/* Define to prevent the static runtime from using dlopen. */
#ifndef SIDL_PURE_STATIC_RUNTIME
/* #undef SIDL_PURE_STATIC_RUNTIME */
#endif

/* Define SIDL_STATIC_LIBRARY to force static loading of libraries */
#ifndef SIDL_STATIC_LIBRARY
/* #undef SIDL_STATIC_LIBRARY */
#endif

/* The size of a `int', as computed by sizeof. */
#ifndef SIZEOF_INT
#define SIZEOF_INT 4
#endif

/* The size of a `long', as computed by sizeof. */
#ifndef SIZEOF_LONG
#define SIZEOF_LONG 4
#endif

/* The size of a `long long', as computed by sizeof. */
#ifndef SIZEOF_LONG_LONG
#define SIZEOF_LONG_LONG 8
#endif

/* The size of a `short', as computed by sizeof. */
#ifndef SIZEOF_SHORT
#define SIZEOF_SHORT 2
#endif

/* The size of a `void *', as computed by sizeof. */
#ifndef SIZEOF_VOID_P
#define SIZEOF_VOID_P 4
#endif

/* Define to 1 if you have the ANSI C header files. */
#ifndef STDC_HEADERS
#define STDC_HEADERS 1
#endif

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#ifndef TIME_WITH_SYS_TIME
#define TIME_WITH_SYS_TIME 1
#endif

/* Version number of package */
#ifndef VERSION
#define VERSION "1.0.4"
#endif

/* Define to empty if `const' does not conform to ANSI C. */
#ifndef const
/* #undef const */
#endif

/* Define to a type to use for `error_t' if it is not otherwise available. */
#ifndef error_t
/* #undef error_t */
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#ifndef inline
/* #undef inline */
#endif
#endif

/* used when a compiler does not recognize int32_t */
#ifndef int32_t
/* #undef int32_t */
#endif

/* used when a compiler does not recognize int64_t */
#ifndef int64_t
/* #undef int64_t */
#endif

/* Define to `int' if <sys/types.h> does not define. */
#ifndef pid_t
/* #undef pid_t */
#endif

/* Define to equivalent of C99 restrict keyword, or to nothing if this is not
   supported. Do not define if restrict is supported directly. */
#ifndef restrict
#define restrict __restrict
#endif

/* Define to `unsigned' if <sys/types.h> does not define. */
#ifndef size_t
/* #undef size_t */
#endif

/* Define as `fork' if `vfork' does not work. */
#ifndef vfork
/* #undef vfork */
#endif

/* Define to empty if the keyword `volatile' does not work. Warning: valid
   code using `volatile' can become incorrect without. Disable with care. */
#ifndef volatile
/* #undef volatile */
#endif


/*
 * Set flags for dynamic or static loading of implementations in Babel stubs.
 * One and only one of SIDL_STATIC_LIBRARY and SIDL_DYNAMIC_LIBRARY may be set.
 * If neither is set, then SIDL_DYNAMIC_LIBRARY is chosen as the default if
 * PIC is set and SIDL_STATIC_LIBRARY is chosen otherwise.  This behavior is
 * consistent with GNU libtool.  In general, we want to generate dynamic
 * loading with shared libraries (indicated by -DPIC in libtool) and static
 * loading with static libraries.
 */
#if (!defined(SIDL_STATIC_LIBRARY) && !defined(SIDL_DYNAMIC_LIBRARY))
#ifdef PIC
#define SIDL_DYNAMIC_LIBRARY
#else
#define SIDL_STATIC_LIBRARY
#endif
#endif

#if (defined(SIDL_STATIC_LIBRARY) && defined(SIDL_DYNAMIC_LIBRARY))
#error Cannot define both SIDL_STATIC_LIBRARY and SIDL_DYNAMIC_LIBRARY
#endif
#if (!defined(SIDL_STATIC_LIBRARY) && !defined(SIDL_DYNAMIC_LIBRARY))
#error Must define one of SIDL_STATIC_LIBRARY or SIDL_DYNAMIC_LIBRARY
#endif

#define UCXX
#define UCXX_LOCAL

/*
 * The USE_DL_IMPORT flag is required for proper Python linking under CYGWIN.
 */
#if defined(__CYGWIN__) && !defined(USE_DL_IMPORT)
#define USE_DL_IMPORT
#endif

#endif

