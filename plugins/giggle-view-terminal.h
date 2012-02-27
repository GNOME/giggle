/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2009 Mathias Hasselmann
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIGGLE_VIEW_TERMINAL_H__
#define __GIGGLE_VIEW_TERMINAL_H__

#include <libgiggle/giggle-view.h>

G_BEGIN_DECLS

#define GIGGLE_TYPE_VIEW_TERMINAL            (giggle_view_terminal_get_type ())
#define GIGGLE_VIEW_TERMINAL(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIGGLE_TYPE_VIEW_TERMINAL, GiggleViewTerminal))
#define GIGGLE_VIEW_TERMINAL_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GIGGLE_TYPE_VIEW_TERMINAL, GiggleViewTerminalClass))
#define GIGGLE_IS_VIEW_TERMINAL(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIGGLE_TYPE_VIEW_TERMINAL))
#define GIGGLE_IS_VIEW_TERMINAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GIGGLE_TYPE_VIEW_TERMINAL))
#define GIGGLE_VIEW_TERMINAL_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GIGGLE_TYPE_VIEW_TERMINAL, GiggleViewTerminalClass))

typedef struct GiggleViewTerminal      GiggleViewTerminal;
typedef struct GiggleViewTerminalClass GiggleViewTerminalClass;

struct GiggleViewTerminal {
	GiggleView parent_instance;
};

struct GiggleViewTerminalClass {
	GiggleViewClass parent_class;
};

GType
giggle_view_terminal_get_type   (void) G_GNUC_CONST;

GtkWidget *
giggle_view_terminal_new        (void);

void
giggle_view_terminal_append_tab (GiggleViewTerminal *view,
                                 const char         *directory);

G_END_DECLS

#endif /* __GIGGLE_VIEW_TERMINAL_H__ */

