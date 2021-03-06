/*------------------------------------------------------------------------.
| Copyright 2000  Alexandre Duret-Lutz <duret_g@epita.fr>                 |
|                                                                         |
| This file is part of Heroes.                                            |
|                                                                         |
| Heroes is free software; you can redistribute it and/or modify it under |
| the terms of the GNU General Public License version 2 as published by   |
| the Free Software Foundation.                                           |
|                                                                         |
| Heroes is distributed in the hope that it will be useful, but WITHOUT   |
| ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or   |
| FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   |
| for more details.                                                       |
|                                                                         |
| You should have received a copy of the GNU General Public License along |
| with this program; if not, write to the Free Software Foundation, Inc., |
| 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA                   |
`------------------------------------------------------------------------*/

#ifndef HEROES__SPRUNISH__H
#define HEROES__SPRUNISH__H

/*---------------------------------------------------------------.
| transparent sprites that use one color key for glenz and one   |
| unique colore for opaque pixel.  This is used to draw the "Get |
| this bonus" arrow.                                             |
`---------------------------------------------------------------*/

#include "sprite.h"

void draw_sprunish (const a_sprite *sprite, a_pixel *dest);
void draw_sprunish_custom (const a_sprite *sprite, a_pixel *dest,
			   a_pixel color);

a_sprite *compile_sprunish (const a_pixel *src, a_pixel transp_color,
			    a_pixel glenz_color, a_pixel *glenz_line,
			    a_pixel opaque_color,
			    unsigned int block_height,
			    unsigned int block_width,
			    unsigned int src_width, unsigned int dest_width);

void free_sprunish (a_sprite *prog);

#endif /* HEROES__SPRSHADE__H */
