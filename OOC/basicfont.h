/*=============================================================================
  basicfont, my basic handmade font.
  Copyright (C) 2009-2014 by Zack T Smith.

  Object-Oriented C is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
 
  Object-Oriented C is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.
 
  You should have received a copy of the GNU Lesser General Public License
  along with this software.  If not, see <http://www.gnu.org/licenses/>.

  The author may be reached at 1@zsmith.co.
 *============================================================================*/

#ifndef _OOC_BASICFONT_H
#define _OOC_BASICFONT_H

#define BASIC_FONT_HEIGHT 17

static const char *basicfont_chars [] =
{
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "",
    "",
    "",

    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "  ",
    "  ",
    "##",
    "##",
    "",
    "",
    "",

    "##  ##",
    "##  ##",
    "##  ##",
    " #   #",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",

    "     ##  ##  ",
    "     ##  ##  ",
    "    ##  ##  ",
    "    ##  ##  ",
    "  ##########",
    "  ##########",
    "    ##  ##  ",
    "   ##  ##  ",
    " ##########",
    " ##########",
    "   ##  ##  ",
    "   ##  ##  ",
    "  ##  ##  ",
    "  ##  ##  ",
    "",
    "",
    "",

    "    ##    ",
    "    ##    ",
    "  ########",
    "##  ##",
    "##  ##    ",
    "##  ##    ",
    "  ######  ",
    "    ## ##",
    "    ##  ##",
    "    ##  ##",
    "    ## ##",
    "########",
    "    ##    ",
    "    ##    ",
    "",
    "",
    "",

    "  ##     ##",
    " #  #    ##",
    "  ##     ##",
    "        ##",
    "       ##",
    "      ##",
    "     ##",
    "    ##",
    "   ##",
    "  ##",
    " ##",
    "##      ## ",
    "##     #  #",
    "##      ## ",
    "",
    "",
    "",

    " #####",
    "##   ##",
    "##   ##",
    "##   ##",
    "##   ##",
    "##  ## ",
    " ## ##   ##",
    " ####   ##",
    "##  ##  ##",
    "##   ####",
    "##     ##",
    "##     ##",
    " ##   ## ##",
    "  #####   ##",
    "",
    "",
    "",

    "###",
    "###",
    " ##",
    "  #",
    " #",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",

    "   ##",
    "  ##",
    " ##",
    " ##",
    " ##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    " ##",
    " ##",
    " ##",
    "  ##",
    "   ##",
    "",

    "##  ",
    " ##  ",
    "  ##",
    "  ##",
    "  ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "  ##",
    "  ##",
    "  ##",
    " ##",
    "##",
    "",

    " ",
    "",
    "",
    "    ##",
    "##  ##  ##",
    " ## ## ##",
    "  ######",
    "   ####",
    "  ######",
    " ## ## ##",
    "##  ##  ##",
    "    ##",
    "",
    "",
    "",
    "",
    "",

    "",
    "",
    "",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "##########",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "",
    "",
    "",
    "",
    "",

    " ",
    " ",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "###",
    "###",
    " ##",
    "  #",
    " #",

    " ",
    "",
    "",
    "",
    "",
    "",
    "",
    "#######",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",

    "  ",
    "  ",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "###",
    "###",
    "",
    "",
    "",

    " ",
    "     ##",
    "     ##",
    "    ##",
    "    ##",
    "   ##",
    "   ##",
    "   ##",
    "  ##",
    "  ##",
    " ##",
    " ##",
    "##",
    "##",
    "",
    "",
    "",

    "  #####  ",
    " ##   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ##",
    "  #####  ",
    "",
    "",
    "",

"   ##",
"   ##",
"  ###",
"#####",
"   ##",
"   ##",
"   ##",
"   ##",
"   ##",
"   ##",
"   ##",
"   ##",
"   ##",
"   ##   ",
    "",
"",
"",

    "  ####  ",
    " ##  ##",
    "##    ##",
    "      ##",
    "      ##",
    "     ##",
    "    ##",
    "   ##",
    "  ##",
    " ##      ",
    "##      ",
    "##      ",
    "##      ",
    "########",
    "",
    "",
    "",

    "########",
    "      ##",
    "      ##",
    "     ##",
    "    ##  ",
    "   ##   ",
    "  ####  ",
    "     ##",
    "      ##",
    "      ##",
    "      ##",
    "##    ##",
    " ##  ##",
    "  ####  ",
    "",
    "",
    "",

    "     ##",
    "    ###",
    "   ####",
    "  ## ##",
    " ##  ##",
    "##   ##",
    "#########",
    "     ##",
    "     ##",
    "     ##",
    "     ##",
    "     ##",
    "     ##",
    "     ##",
    "",
    "",
    "",

    "########",
    "##      ",
    "##      ",
    "##      ",
    "##      ",
    "###",
    " ######",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "##    ##",
    " ##  ##",
    "  ####  ",
    "",
    "",
    "",

    "  ##### ",
    " ##    #",
    "##",
    "##",
    "##",
    "##",
    "#######",
    "##    ##  ",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ##",
    "  #####  ",
    "",
    "",
    "",

    "########",
    "     ##",
    "     ##",
    "    ##",
    "    ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "",
    "",
    "",

    "  #####  ",
    " ##   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ##",
    "  #####  ",
    " ##   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ##",
    "  #####  ",
    "",
    "",
    "",

    "  #####  ",
    " ##   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##    ##",
    "  #######",
    "      ##",
    "      ##",
    "     ##",
    "     ##",
    "     ##",
    "    ##",
    "    ##",
    "",
    "",
    "",

    " ",
    " ",
    "",
    "",
    "",
    "###",
    "###",
    "",
    "",
    "",
    "",
    "###",
    "###",
    "",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "",
    "###",
    "###",
    "",
    "",
    "",
    "",
    "###",
    "###",
    " ##",
    " ##",
    "#",
    "",

    "      ##",
    "     ##",
    "    ##",
    "   ##",
    "  ##",
    " ##",
    "##",
    "##",
    " ##",
    "  ##",
    "   ##",
    "    ##",
    "     ##",
    "      ##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "",
    "",
    "############",
    "############",
    "    ",
    "    ",
    "############",
    "############",
    "",
    "",
    "",
    "",
    "",

    "##",
    " ##",
    "  ##",
    "   ##",
    "    ##",
    "     ##",
    "      ##",
    "      ##",
    "     ##",
    "    ##",
    "   ##",
    "  ##",
    " ##",
    "##",
    "",
    "",
    "",

    "  ######  ",
    " ##    ##",
    "##      ##",
    "##      ##",
    "        ##",
    "       ##",
    "     ###  ",
    "    ##",
    "    ##",
    "    ##",
    "",
    "",
    "    ##",
    "    ##",
    "",
    "",
    "",

    "  ######  ",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##    ####",
    "##   ## ##",
    "##  ##  ##",
    "##  ##  ##",
    "##   ## ##",
    "##    ####",
    "##        ",
    "##        ",
    " ##     ##",
    "  #######",
    "",
    "",
    "",

    "    ##",
    "   ####",
    "   ####",
    "  ##  ##",
    "  ##  ##",
    "  ##  ##",
    "  ##  ##",
    " ##    ##",
    " ########",
    " ##    ##",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "",
    "",
    "",

    "#######",
    "##    ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##    ##",
    "#######",
    "##    ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##    ##",
    "#######",
    "",
    "",
    "",

    "  ######  ",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##        ",
    "##        ",
    "##        ",
    "##        ",
    "##        ",
    "##        ",
    "##      ##",
    "##      ##",
    " ##    ##",
    "  ######",
    "",
    "",
    "",

    "########",
    "##     ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##     ##  ",
    "########",
    "",
    "",
    "",

    "##########",
    "##",
    "##",
    "##",
    "##",
    "##",
    "########",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##########",
    "",
    "",
    "",

    "##########",
    "##",
    "##",
    "##",
    "##",
    "##",
    "########",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "",
    "",
    "",

    "  ######  ",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##        ",
    "##        ",
    "##    ####",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    " ##    ###",
    "  ###### #",
    "",
    "",
    "",

    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##########",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "",
    "",
    "",

    " ## ",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    " ##",
    "",
    "",
    "",

    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "      ##",
    "##    ##",
    "##    ##",
    " ##  ##",
    "  ####",
    "",
    "",
    "",

    "##      ##",
    "##     ##",
    "##    ##",
    "##   ##",
    "##  ##",
    "## ##",
    "####",
    "####",
    "## ##",
    "##  ##",
    "##   ##",
    "##    ##",
    "##     ##",
    "##      ##",
    "",
    "",
    "",

    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "########",
    "",
    "",
    "",

    "##         ##",
    "###       ###",
    "####     ####",
    "## ##   ## ##",
    "##  ## ##  ##",
    "##   ###   ##",
    "##    #    ##",
    "##         ##",
    "##         ##",
    "##         ##",
    "##         ##",
    "##         ##",
    "##         ##",
    "##         ##",
    "",
    "",
    "",

    "##      ##",
    "###     ##",
    "####    ##",
    "####    ##",
    "## ##   ##",
    "## ##   ##",
    "##  ##  ##",
    "##  ##  ##",
    "##   ## ##",
    "##   ## ##",
    "##    ####",
    "##    ####",
    "##     ###",
    "##      ##",
    "",
    "",
    "",

    "  ######  ",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    " ##    ##",
    "  ######",
    "",
    "",
    "",

    "########",
    "##     ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##     ##",
    "########",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "",
    "",
    "",

    "  ######",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##  ##  ##",
    "##  ##  ##",
    "##   ## ##",
    "##    ###",
    " ##    ##",
    "  ##### ##",
    "",
    "",
    "",

    "########",
    "##     ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##     ##",
    "########",
    "####",
    "## ##",
    "##  ##",
    "##   ##",
    "##    ##",
    "##     ##",
    "##      ##",
    "",
    "",
    "",

    "  ######",
    " ##    ##",
    "##      ##",
    "##      ##",
    "##",
    " ###",
    "   #####",
    "       ##",
    "        ##",
    "        ##",
    "##      ##",
    "##      ##",
    " ##    ##",
    "  ######",
    "",
    "",
    "",

    "##########",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "",
    "",
    "",

    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    "##      ##",
    " ##    ##",
    "  ######",
    "",
    "",
    "",

    "##       ##",
    "##       ##",
    " ##     ##",
    " ##     ##",
    " ##     ##",
    "  ##   ## ",
    "  ##   ## ",
    "  ##   ## ",
    "   ## ##  ",
    "   ## ##  ",
    "   ## ##  ",
    "    ###   ",
    "    ###   ",
    "     #    ",
    "",
    "",
    "",

"##      ##      ##",
"##      ##      ##",
"##      ##      ##",
" ##    ####    ##",
" ##    ####    ##",
" ##   ##  ##   ##",
" ##   ##  ##   ##",
"  ## ##    ## ##",
"  ## ##    ## ##",
"  ## ##    ## ##",
"  ## ##    ## ##",
"   # #      # #",
"   ###      ###",
"   ###      ###",
    "",
    "",
    "",

    "##      ##",
    "##      ##",
    " ##    ##",
    " ##    ##",
    "  ##  ##",
    "  ##  ##",
    "    ##",
    "    ##",
    "  ##  ##",
    "  ##  ##",
    " ##    ##",
    " ##    ##",
    "##      ##",
    "##      ##",
    "",
    "",
    "",

    "##      ##",
    "##      ##",
    " ##    ##",
    " ##    ##",
    "  ##  ##",
    "  ##  ##",
    "   ####",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "    ##",
    "",
    "",
    "",

    "#########",
    "      ##",
    "      ##",
    "     ##",
    "     ##",
    "    ##",
    "    ##",
    "   ##",
    "   ##",
    "  ##",
    "  ##",
    " ##",
    " ##",
    "#########",
    "",
    "",
    "",

    "#####",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "#####",
    "",

    "##",
    "##",
    "##",
    "##",
    " ##",
    "  ##",
    "   ##",
    "    ##",
    "     ##",
    "      ##",
    "       ##",
    "        ##",
    "        ##",
    "        ##",
    "",
    "",
    "",

    "#####",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "#####",
    "",

    "    ##",
    "   ####",
    "  ##  ##",
    " ##    ##",
    "##      ##",
    "##      ##",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "########",
    "",
    "",
    "",

    "####",
    "####",
    "##",
    " ##",
    "   #",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "  ######",
    " ##    ##",
    "       ##",
    "       ##",
    "   ######",
    " ##    ##",
    "##     ##",
    "##     ##",
    " ##    ##",
    "  ##### ##",
    "",
    "",
    "",

    "##",
    "##",
    "##",
    "##",
    "## ####",
    "###   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "###   ##",
    "## ####",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "  #####",
    " ##   ##",
    "##      ",
    "##      ",
    "##      ",
    "##      ",
    "##      ",
    "##      ",
    " ##   ##",
    "  #####",
    "",
    "",
    "",

    "       ##",
    "       ##",
    "       ##",
    "       ##",
    "  #### ##",
    " ##   ###",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ###",
    "  #### ##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "  #####",
    " ##   ##",
    "##     ##",
    "##     ##",
    "#########",
    "##",
    "##",
    "##",
    " ##    ##",
    "  ######",
    "",
    "",
    "",

    "  #####",
    " ##",
    " ## ",
    " ## ",
    "#####",
    " ## ",
    " ## ",
    " ## ",
    " ## ",
    " ## ",
    " ## ",
    " ## ",
    " ## ",
    " ## ",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "  ##### #",
    " ##    ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##    ##",
    "  #######",
    "       ##",
    "##    ##",
    " ######",

    "##",
    "##",
    "##",
    "##",
    "## ####",
    "###   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "",
    "",
    "",

"##",
"##",
"",
"",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
    "",
    "",
    "",

    "   ##",
    "   ##",
    " ",
    "     ",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "   ##",
    "  ##",
    "###",

    "##",
    "##",
    "##",
    "##",
    "##    ##",
    "##   ##",
    "##  ##  ",
    "## ##  ",
    "####    ",
    "####    ",
    "## ##  ",
    "##  ##  ",
    "##   ##",
    "##    ##",
    "",
    "",
    "",

"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
"##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "## ### ####",
    "###  ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "##   ##   ##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "## ####",
    "###   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "  #####",
    " ##   ## ",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ## ",
    "  #####  ",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "## ####",
    "###   ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##    ##",
    "#######",
    "##",
    "##",
    "##",

    " ",
    "",
    "",
    "",
    "  #### ##",
    " ##   ###",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##    ##",
    "  #######",
    "       ##",
    "       ##",
    "       ###",

    " ",
    "",
    "",
    "",
    "## ####",
    "####  ##",
    "###",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    " ######",
    "##    ##",
    "##",
    "##",
    " ###",
    "    ###",
    "      ##",
    "      ##",
    "##    ##",
    " ######",
    "",
    "",
    "",

    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "######",
    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "  ##",
    "   ####",
    "",
    "",
    "",

    "",
    "",
    "",
    "",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##    ##",
    "  ##### #",
    "",
    "",
    "",

    "",
    "",
    "",
    "",
    "##     ##",
    "##     ##",
    "##     ##",
    " ##   ##",
    " ##   ##",
    " ##   ##",
    "  ## ##",
    "  ## ##",
    "  #####",
    "   ###",
    "",
    "",
    "",

    "",
    "",
    "",
    "",
    "##     ##     ##",
    "##     ##     ##",
    "##     ##     ##",
    " ##   ####   ##",
    " ##   ####   ##",
    " ##   ####   ##",
    "  ## ##  ## ##",
    "  ## ##  ## ##",
    "  #####  #####",
    "   ###    ###",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    "##      ##",
    "##      ##",
    " ##    ##",
    "  ##  ##",
    "    ##",
    "    ##",
    "  ##  ##",
    " ##    ##",
    "##      ##",
    "##      ##",
    "",
    "",
    "",

    " ",
    "",
    "",
    "",
    " ##     ##",
    " ##     ##",
    " ##     ##",
    "  ##   ##",
    "  ##   ##",
    "  ##   ##",
    "   ## ##",
    "   ## ##",
    "   ####",
    "    ###",
    "    ##",
    "   ###",
    "####",

    " ",
    "",
    "",
    "",
    "#########",
    "       ##",
    "      ##",
    "     ##",
    "    ##",
    "   ##",
    "  ##  ",
    " ##  ",
    "##  ",
    "#########",
    "",
    "",
    "",

    NULL,
};

#endif