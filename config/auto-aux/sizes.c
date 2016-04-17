/**************************************************************************/
/*                                                                        */
/*                                 OCaml                                  */
/*                                                                        */
/*             Xavier Leroy, projet Cristal, INRIA Rocquencourt           */
/*                                                                        */
/*   Copyright 1996 Institut National de Recherche en Informatique et     */
/*     en Automatique.                                                    */
/*                                                                        */
/*   All rights reserved.  This file is distributed under the terms of    */
/*   the GNU Lesser General Public License version 2.1, with the          */
/*   special exception on linking described in the file LICENSE.          */
/*                                                                        */
/**************************************************************************/

#include <limits.h>
#include <inttypes.h>
#define MAX_i16 0x7FFFUL
#define MAX_i32 0x7FFFFFFFUL
#define MAX_i64 0x7FFFFFFFFFFFFFFFULL
#define MAX_u32 0xFFFFFFFFUL
#define MAX_u64 0xFFFFFFFFFFFFFFFFULL

#if INT_MAX == MAX_i16
2
#elif INT_MAX == MAX_i32
4
#elif INT_MAX == MAX_i64
8
#else
# error "Bad size for int"
#endif
#if LONG_MAX == MAX_i32
4
#elif LONG_MAX == MAX_i64
8
#else
# error "Bad size for long"
#endif
#if SIZE_MAX == MAX_u32
4
#elif SIZE_MAX == MAX_u64
8
#else
# error "Bad size for pointers"
#endif
#if SHRT_MAX == MAX_i16
2
#elif SHRT_MAX == MAX_i32
4
#elif SHRT_MAX == MAX_i64
8
#else
# error "Bad size for short"
#endif

#if LLONG_MAX == MAX_i64
8
#else
# error "Bad size for long long"
#endif
