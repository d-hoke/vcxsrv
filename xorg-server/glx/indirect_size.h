/* DO NOT EDIT - This file generated automatically by glX_proto_size.py (from Mesa) script */

/*
 * (C) Copyright IBM Corporation 2004
 * All Rights Reserved.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * IBM,
 * AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#if !defined( _INDIRECT_SIZE_H_ )
#  define _INDIRECT_SIZE_H_

/**
 * \file
 * Prototypes for functions used to determine the number of data elements in
 * various GLX protocol messages.
 *
 * \author Ian Romanick <idr@us.ibm.com>
 */

#  if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590))
#    define PURE __attribute__((pure))
#  else
#    define PURE
#  endif

#  if defined(__i386__) && defined(__GNUC__) && !defined(__CYGWIN__) && !defined(__MINGW32__)
#    define FASTCALL __attribute__((fastcall))
#  else
#    define FASTCALL
#  endif

#  if (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3) || (defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590))) && defined(__ELF__)
#    define INTERNAL  __attribute__((visibility("internal")))
#  else
#    define INTERNAL
#  endif


#  undef PURE
#  undef FASTCALL
#  undef INTERNAL

#endif /* !defined( _INDIRECT_SIZE_H_ ) */
