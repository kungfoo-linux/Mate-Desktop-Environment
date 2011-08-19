#ifndef POA_POLICY_H
#define POA_POLICY_H 1

#include <glib.h>

G_BEGIN_DECLS

#ifdef MATECORBA2_INTERNAL_API

#define MateCORBA_PortableServer_OKEYRAND_POLICY_ID CORBA_VPVID_MateCORBA0|1

typedef CORBA_Policy MateCORBA_PortableServer_OkeyrandPolicy;

MateCORBA_PortableServer_OkeyrandPolicy
PortableServer_POA_create_okeyrand_policy(PortableServer_POA _obj,
					  const CORBA_unsigned_long poa_rand_len,
					  CORBA_Environment *ev);

#endif /* MATECORBA2_INTERNAL_API */

G_END_DECLS

#endif
