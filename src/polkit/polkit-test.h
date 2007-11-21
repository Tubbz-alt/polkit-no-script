/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*- */
/***************************************************************************
 *
 * polkit-test.h : PolicyKit test
 *
 * Copyright (C) 2007 David Zeuthen, <david@fubar.dk>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 **************************************************************************/

#if !defined (POLKIT_COMPILATION)
#error "polkit-test.h is a private file"
#endif

#ifndef POLKIT_TEST_H
#define POLKIT_TEST_H

#include <kit/kit.h>
#include <polkit/polkit-types.h>

POLKIT_BEGIN_DECLS

extern KitTest _test_action;
extern KitTest _test_error;
extern KitTest _test_result;
extern KitTest _test_seat;
extern KitTest _test_session;
extern KitTest _test_caller;
extern KitTest _test_policy_default;
extern KitTest _test_policy_file_entry;
extern KitTest _test_policy_file;
extern KitTest _test_policy_cache;
extern KitTest _test_authorization_constraint;
extern KitTest _test_authorization;
extern KitTest _test_authorization_db;
extern KitTest _test_config;
extern KitTest _test_sysdeps;
extern KitTest _test_context;

POLKIT_END_DECLS

#endif /* POLKIT_TEST_H */

