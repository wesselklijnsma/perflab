/******************************************************************************/
/* This file is copyright protected, see the notice at the end of the file    */
/******************************************************************************/

#ifndef LINE_VERSIONS_H
#define LINE_VERSIONS_H

#include "defs.h"

#define NAIVE_LINE_DESCR "naive_line: baseline implementation"
void baseline_line(int dim, pixel *src, pixel *dst);

/* ... Declare intermediate versions of the draw_line version here */
/* ... When you made progress,
 *                   it is a good idea to give that version a name */

#endif /* LINE_VERSIONS_H */

/******************************************************************************/
/*                                                                            */
/* This file is copyright protected.                                          */
/*                                                                            */
/* Copyright (c) 2004 University of Amsterdam.                                */
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
/* Last Modification:  September 2004                               \  /      */
/*                                                                  /  \      */
/* Author: Arnoud Visser                                         _  \/\/  _   */
/*         University of Amsterdam                              | |      | |  */
/*         Dept. of Computer Systems                            | | /\/\ | |  */
/*         Kruislaan 403, NL 1098 SJ Amsterdam                  | | \  / | |  */
/*         THE NETHERLANDS                                      | | /  \ | |  */
/*         arnoud@science.uva.nl                                | | \/\/ | |  */
/*                                                              | \______/ |  */
/* This software has been written for the Computer Systems       \________/   */
/* course at our department. No representations are made about                */
/* the suitability of this software for any purpose other           /\/\      */
/* than research and education.                                     \  /      */
/*                                                                  /  \      */
/* Release note: Only the naive version is declared.                \/\/      */
/*               This version is real slow. Have patience when testing.       */
/******************************************************************************/
