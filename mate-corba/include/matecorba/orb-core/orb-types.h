#ifndef ORB_TYPES_H
#define ORB_TYPES_H 1

#include <matecorba/matecorba-config.h>

G_BEGIN_DECLS

/*
 * The MATECORBA_ALIGNOF_ defines are generated by configure
 * and reside in matecorba/matecorba-config.h
 *
 * Here the alignment of complex types is computed.
 */

/* alignment of the CORBA_any struct. */
#define MATECORBA_ALIGNOF_CORBA_ANY    MAX(     MATECORBA_ALIGNOF_CORBA_STRUCT,  \
					    MATECORBA_ALIGNOF_CORBA_POINTER)

/* alignment of CORBA_any._value.     */
#define MATECORBA_ALIGNOF_CORBA_TCVAL  MAX(MAX( MATECORBA_ALIGNOF_CORBA_LONG,    \
					    MATECORBA_ALIGNOF_CORBA_STRUCT), \
					    MATECORBA_ALIGNOF_CORBA_POINTER)
/* alignment of sequence structures.  */
#define MATECORBA_ALIGNOF_CORBA_SEQ    MAX(MAX( MATECORBA_ALIGNOF_CORBA_STRUCT,  \
					    MATECORBA_ALIGNOF_CORBA_LONG),   \
					    MATECORBA_ALIGNOF_CORBA_POINTER)

/* alignment of CORBA_fixed_d_s */
#define MATECORBA_ALIGNOF_CORBA_FIXED  MAX (    MATECORBA_ALIGNOF_CORBA_SHORT,   \
					    MATECORBA_ALIGNOF_CORBA_STRUCT);

/* typedef CORBA_char              *CORBA_ORBid; */
typedef struct CORBA_any_struct  CORBA_any;

typedef struct {
        CORBA_unsigned_short _digits;
        CORBA_short _scale;
        signed char _sign;
        signed char _value[1];
} CORBA_fixed_d_s;

struct CORBA_NVList_type {
	CORBA_unsigned_long flags; /* should be CORBA_Flags */
	GArray *list;
};

#define CORBA_OBJECT_NIL NULL

#define CORBA_ARG_IN (1<<0)
#define CORBA_ARG_OUT (1<<1)
#define CORBA_ARG_INOUT (1<<2)
#define CORBA_CTX_RESTRICT_SCOPE (1<<3)
#define CORBA_CTX_DELETE_DESCENDENTS (1<<4)
#define CORBA_OUT_LIST_MEMORY (1<<5)
#define CORBA_IN_COPY_VALUE (1<<6)
#define CORBA_DEPENDENT_LIST (1<<7)
#define CORBA_INV_NO_RESPONSE (1<<8)
#define CORBA_INV_TERM_ON_ERROR (1<<9)
#define CORBA_RESP_NO_WAIT (1<<10)

G_END_DECLS

#endif
