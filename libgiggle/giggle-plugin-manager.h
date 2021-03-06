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

#ifndef __GIGGLE_PLUGIN_MANAGER_H__
#define __GIGGLE_PLUGIN_MANAGER_H__

#include "giggle-plugin.h"

G_BEGIN_DECLS

#define GIGGLE_TYPE_PLUGIN_MANAGER            (giggle_plugin_manager_get_type ())
#define GIGGLE_PLUGIN_MANAGER(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIGGLE_TYPE_PLUGIN_MANAGER, GigglePluginManager))
#define GIGGLE_PLUGIN_MANAGER_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GIGGLE_TYPE_PLUGIN_MANAGER, GigglePluginManagerClass))
#define GIGGLE_IS_PLUGIN_MANAGER(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIGGLE_TYPE_PLUGIN_MANAGER))
#define GIGGLE_IS_PLUGIN_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GIGGLE_TYPE_PLUGIN_MANAGER))
#define GIGGLE_PLUGIN_MANAGER_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GIGGLE_TYPE_PLUGIN_MANAGER, GigglePluginManagerClass))

typedef struct GigglePluginManagerClass GigglePluginManagerClass;

struct GigglePluginManager {
	GObject parent_instance;
};

struct GigglePluginManagerClass {
	GObjectClass parent_class;

	/*< signals >*/
	void (* plugin_added) (GigglePluginManager *manager,
			       GigglePlugin        *plugin);
};

GType			giggle_plugin_manager_get_type   (void) G_GNUC_CONST;
GigglePluginManager *	giggle_plugin_manager_new        (void);

GtkWidget *		giggle_plugin_manager_get_widget (GigglePluginManager *manager,
							  const char          *name);

void			giggle_plugin_manager_add_widget (GigglePluginManager *manager,
							  const char          *name,
							  GtkWidget           *widget);

G_END_DECLS

#endif /* __GIGGLE_PLUGIN_MANAGER_H__ */

