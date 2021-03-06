/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _OPT2_H_RPCGEN
#define	_OPT2_H_RPCGEN

#include <rpc/rpc.h>

#ifdef __cplusplus
extern "C" {
#endif


/* include opt2h */
struct mylist {
	char *name;
	long value;
	struct mylist *next;
};
typedef struct mylist mylist;

struct args {
	mylist *list;
};
typedef struct args args;
/* end opt2h */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_mylist(XDR *, mylist*);
extern  bool_t xdr_args(XDR *, args*);

#else /* K&R C */
extern bool_t xdr_mylist();
extern bool_t xdr_args();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_OPT2_H_RPCGEN */
