/******************************************************************************/
/* This file is copyright protected, see the notice at the end of the file    */
/******************************************************************************/

#ifndef LINE_VERSIONS_H
#define LINE_VERSIONS_H

#include "defs.h"

#define NAIVE_LINE_DESCR "naive_line: baseline implementation"
void naive_line(int dim, pixel *src, pixel *dst);
#define LINE_1_DESCR "line_1: maximum uit de loop"
void line_1(int dim, pixel *src, pixel *dst);
#define LINE_2_DESCR "line_2: inner loop weg"
void line_2(int dim, pixel *src, pixel *dst);
#define LINE_3_DESCR "line_3: intensity inlined"
void line_3(int dim, pixel *src, pixel *dst);
#define LINE_4_DESCR "line_4: loop unrolled (8x)"
void line_4(int dim, pixel *src, pixel *dst);
#define LINE_5_DESCR "line_5: variabele weggehaald"
void line_5(int dim, pixel *src, pixel *dst);
#define LINE_6_DESCR "line_6: zelfde type bij elkaar"
void line_6(int dim, pixel *src, pixel *dst);
#define LINE_7_DESCR "line_7: ..."
void line_7(int dim, pixel *src, pixel *dst);

/* ... Declare intermediate versions of the draw_line version here */
/* ... When you made progress,
 *                   it is a good idea to give that version a name */

#endif /* LINE_VERSIONS_H */

/******************************************************************************/
/*                                                                            */
/* This file is copyright protected.                                          */
/*                                                                            */
/* Copyright (c) 2004-2011 University van Amsterdam.                          */
/* This software or any part thereof may only be used for non-commercial      */
/* research or purposes, as long as the author and University are mentioned.  */
/* Commercial use without explicit prior written consent by the University    */
/* of Amsterdam is strictly prohibited.                                       */
/*                                                                            */
/* This copyright notice must be included with any copy of this software or   */
/* any part thereof.                                                          */
/*                                                                            */
/******************************************************************************/
/* line_versions.h                                                  /\/\      */
/* Last Modification:  February 2011                                \  /      */
/*                                                                  /  \      */
/* Author: Arnoud Visser                                         _  \/\/  _   */
/*         University van Amsterdam                             | |      | |  */
/*         Informatics Institute                                | | /\/\ | |  */
/*         Science Park 904, 1098 XH Amsterdam                  | | \  / | |  */
/*         THE NETHERLANDS                                      | | /  \ | |  */
/*         A.Visser@uva.nl                                      | | \/\/ | |  */
/*                                                              | \______/ |  */
/* This software has been written for the Computer Systems       \________/   */
/* course at our department. No representations are made about                */
/* the suitability of this software for any purpose other           /\/\      */
/* than research and education.                                     \  /      */
/*                                                                  /  \      */
/* Release note: Only the naive version is declared.                \/\/      */
/*               This version is real slow. Have patience when testing.       */
/******************************************************************************/
