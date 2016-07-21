/*
    AlceOSD - Graphical OSD
    Copyright (C) 2015  Luis Alves

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "alce-osd.h"

static int open(struct widget *w)
{
    video_apply_config(w->cfg->props.mode);
    return 0;
}

const struct widget_ops vidprf_widget_ops = {
    .name = "Video profile",
    .mavname = "VIDPRF",
    .id = WIDGET_VIDPROFILE_ID,
    .init = NULL,
    .open = open,
    .render = NULL,
    .close = NULL,
};
