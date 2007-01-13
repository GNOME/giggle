/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2007 Imendio AB
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
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <config.h>

#include "giggle-dummy.h"

typedef struct GiggleDummyPriv GiggleDummyPriv;

struct GiggleDummyPriv {
	guint i;
};

static void  giggle_dummy_finalize (GObject *object);

G_DEFINE_TYPE (GiggleDummy, giggle_dummy, G_TYPE_OBJECT);

#define GET_PRIV(obj) (G_TYPE_INSTANCE_GET_PRIVATE ((obj), GIGGLE_TYPE_DUMMY, GiggleDummyPriv))

static void
giggle_dummy_class_init (GiggleDummyClass *class)
{
	GObjectClass *object_class = G_OBJECT_CLASS (class);

	object_class->finalize = giggle_dummy_finalize;

	g_type_class_add_private (object_class, sizeof (GiggleDummyPriv));
}

static void
giggle_dummy_init (GiggleDummy *dummy)
{
}

static void
giggle_dummy_finalize (GObject *object)
{
	/* FIXME: Free object data */

	G_OBJECT_CLASS (giggle_dummy_parent_class)->finalize (object);
}
