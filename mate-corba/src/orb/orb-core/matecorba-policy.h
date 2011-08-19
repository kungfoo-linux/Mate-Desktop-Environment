/**
 * matecorba-policy.h: re-enterancy policy object for client invocations
 *
 * Author:
 *   Michael Meeks (michael@ximian.com)
 *
 * Copyright 2003 Ximian, Inc.
 */
#ifndef _MATECORBA_POLICY_H_
#define _MATECORBA_POLICY_H_

#include <matecorba/matecorba.h>

G_BEGIN_DECLS

struct _MateCORBAPolicy {
	struct MateCORBA_RootObject_struct parent;

	GPtrArray *allowed_poas;
};

gboolean MateCORBA_policy_validate (MateCORBAPolicy *policy);

G_END_DECLS

#endif /* _MATECORBA_POLICY_H_ */
