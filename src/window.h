/* window.h */

/* Main program window */

/* fsv - 3D File System Visualizer
 * Copyright (C)1999 Daniel Richard G. <skunk@mit.edu>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */


#ifdef FSV_WINDOW_H
	#error
#endif
#define FSV_WINDOW_H
#include "common.h"
enum {
    SB_LINEUP       = 0,
    SB_LINELEFT     = 0,
    SB_LINEDOWN     = 1,
    SB_LINERIGHT    = 1,
    SB_PAGEUP       = 2,
    SB_PAGELEFT     = 2,
    SB_PAGEDOWN     = 3,
    SB_PAGERIGHT    = 3,
    SB_THUMBPOSITION    = 4,
    SB_THUMBTRACK       = 5,
    SB_TOP          = 6,
    SB_LEFT         = 6,
    SB_BOTTOM       = 7,
    SB_RIGHT        = 7,
    SB_ENDSCROLL    = 8
} ScrollBarCommands;
void window_init( FsvMode fsv_mode );
void window_set_access( boolean enabled );
#ifdef FSV_COLOR_H
void window_set_color_mode( ColorMode mode );
#endif
void window_birdseye_view_off( void);
void window_statusbar( int sb_id, const char *message );


/* end window.h */
