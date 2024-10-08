#ifndef NIT_COMMON_H
#define NIT_COMMON_H

/* This file is part of NIT ( https://nitlanguage.org ).
 *
 * Copyright 2006-2009 Jean Privat <jean@pryen.org>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* *** Types *** */
typedef signed long int bigint;	/* standard int value, must be larger that any poiner */
typedef bigint (*fun_t) (bigint);					/* generic function pointer */
typedef bigint cid_t;					/* class identifier */
typedef char* cname_t;					/* class name */
typedef bigint val_t;	/* value (everything is a val_t) */
typedef union obj_tu {union classtable_elt_tu * vft; bigint object_id; val_t objectSize;} *obj_t; /* standard object */
typedef union classtable_elt_tu { bigint i; fun_t f; cid_t cid; cname_t cname;} classtable_elt_t;	/* classtable element */
typedef struct Nit_NativeArray {const classtable_elt_t * vft; bigint object_id; bigint size; val_t val[1];} * Nit_NativeArray;

typedef classtable_elt_t * classtable_t;			/* classtable */

extern bigint object_id_counter;

/*****************************************************************************
 * Types macros (primitive and less primitives) ******************************
 *****************************************************************************
 *
 * ** types are: **
 *
 * OBJ	(obj_t)	: standard object representation (including boxes + NIL)
 * Int	(int)	: integers
 * Char	(car)	: characters
 * Bool	(int)	: booleans (true or false)
 *
 * X	(x_t)	: generic representatio of the previous four types
 *
 * ** macros are: **
 *
 * int ISX(val_t v)		: true if v is a X
 * x_t VAL2X(val_t v)		: convert a val_t to a primitive type (you should check ISX before)
 * val_t X2VAL(x_t x)		: convert a type to a val_t
 * int XTAG			: numeric identifier of a type
 * int TAG(val_t v)		: return the XTAG (ie TAG(Char2VAL('e')) == CharTag)
 *
 * classtable_t VAL2VFT(val_t v): the virtual function table of a value
 *
 * val_t NIT_NULL		: the instance of the None class
 *****************************************************************************/

#define TAG(x) ((int)(x) & 3)
#ifndef IntTAG
#	define IntTAG 1
#endif
#define TAG_Int(x) ((val_t)(((x)<<2)|IntTAG))
#define UNTAG_Int(x) ((bigint)(x)>>2)
#ifndef CharTAG
#	define CharTAG 2
#endif
#define TAG_Char(x) ((val_t)((((int)(x))<<2)|CharTAG))
#define UNTAG_Char(x) ((char)((int)(x)>>2))
#ifndef BoolTAG
#	define BoolTAG 3
#endif
#define TAG_Bool(x) ((val_t)(((x)<<2)|BoolTAG))
#define UNTAG_Bool(x) ((int)(x)>>2)
#ifndef OBJTAG
#	define OBJTAG 0
#endif

#define ISOBJ(x) (TAG((x)) == OBJTAG)
#define VAL2OBJ(x) ((obj_t)(x))
#define VAL2ARRAY(x) ((Nit_NativeArray)(x))
#define OBJ2VAL(o) ((val_t)(o))
#define VAL2VFT(x) (ISOBJ(x) ? VAL2OBJ(x)->vft : TAG2VFT[TAG(x)])
/*#define VAL2CID(x) (ISOBJ(x) ? (VAL2OBJ(x)->vft->cid) : (-TAG(x)))*/
#define VAL2CID(x) (VAL2OBJ(x)->vft->cid)

#define NIT_NULL ((val_t)0)
#define ISNULL(x) ((x)==NIT_NULL)

/* Equal comparaison */
/* O = Non nil object ; N = Object or nil ; P = Primitive */
#define OBJ_IS_BOX(x) ((VAL2OBJ(x)->vft->i) < 0)
#define OBJ_IS_ARRAY(x) ((VAL2ARRAY(x)->vft[1].i) == -1)
#define IS_BOX(x) (ISOBJ(x) && OBJ_IS_BOX(x))
#define IS_EQUAL_BOX(x, y) (ISOBJ(y) && (VAL2OBJ(x)[2].vft==VAL2OBJ(y)[2].vft) && (VAL2OBJ(x)->vft==VAL2OBJ(y)->vft))
#define IS_EQUAL_OO(x, y) ((x)==(y) || (IS_BOX(x) && IS_EQUAL_BOX((x), (y))))
#define IS_EQUAL_ON(x, y) ((x)==(y) || (IS_BOX(x) && !ISNULL(y) && IS_EQUAL_BOX((x), (y))))
#define IS_EQUAL_NN(x, y) ((x)==(y) || (!ISNULL(x) && IS_BOX(x) && !ISNULL(y) && IS_EQUAL_BOX((x), (y))))

/* Subclass comparaison */
/* check is e is a subtype of c2 */
/* Warning, only subclasse comparaison is performed, not subtype */
/* e is a val (not nil) */
/* c a class name (eg: Int) */
#define VALISA(e, c) (VAL2VFT(e)[COLOR_ ## c].cid == (cid_t) ID_ ## c)
#define OBJISA(e, c) (VAL2OBJ(e)->vft[COLOR_ ## c].cid == (cid_t) ID_ ## c)

#define VAL_ISA(e, c, i) (VAL2VFT((e))[(c)].cid == (cid_t)(i))

/* GC and memory management */
void *alloc(size_t); /* allocate memory to store an object with an object header */
void *raw_alloc(size_t); /* allocate raw memory to store a raw stram of byte */
void register_static_object(val_t*); /* mark that something is a global or once object */

extern val_t G_args;
extern val_t G_stdin;
extern val_t G_stdout;
extern val_t G_stderr;
extern val_t G_sys;

extern int glob_argc;
extern char ** glob_argv;

/* Native reference to Nit objects */
/* This structure is used to represent every Nit type in extern methods and custom C code. */
struct nitni_ref {
	val_t val; /* reference to the real Nit object, is kept up-to-date by GC */
	struct nitni_ref *next, *prev; /* adjacent global references in global list */
	int count; /* number of time this global reference has been marked */
};

/* This structure is used by extern methods to keep track of local references to Nit objects */
/* These references make sure an object is not collected by the GC while
 * this extern methods is on the call stack. */
/* This takes the form of an array link, each link of size 8 to avoid multiple mallocs. */
#define NITNI_REF_ARRAY_LINK_SIZE 8
struct nitni_ref_array_link {
	struct nitni_ref *reg[ NITNI_REF_ARRAY_LINK_SIZE ];
	int count; /* nubmer of elements in this link */
	struct nitni_ref_array_link *next; /* next link in the list */
};

/* Register reference to Nit object with the latest extern method called. */
extern void nitni_local_ref_add( struct nitni_ref *ref );

/* Clean all references associated to the current (but returning) extern method. */
extern void nitni_local_ref_clean( void );

/* List of global references from C code to Nit objects */
/* Instanciated empty at init of Nit system and filled explicitly by user in C code */
struct nitni_global_ref_list_t {
	struct nitni_ref *head, *tail;
};
extern struct nitni_global_ref_list_t *nitni_global_ref_list;

/* Initializer of global reference list */
extern void nitni_global_ref_list_init();

/* Intern function to add a global reference to the list */
extern void nitni_global_ref_add( struct nitni_ref *ref );

/* Intern function to remove a global reference from the list */
extern void nitni_global_ref_remove( struct nitni_ref *ref );

/* Increase count on an existing global reference */
extern void nitni_global_ref_incr( struct nitni_ref *ref );

/* Decrease count on an existing global reference */
extern void nitni_global_ref_decr( struct nitni_ref *ref );

/* Stack frames.
 * Are used to:
 * - store local variables (REGS) of functions
 * - store context for closure
 * - provide information for stack dump
 */
struct stack_frame_t {
	struct stack_frame_t *prev; /* previous stack frame */
	const char *file; /* source filename (.nit) */
	int line; /* line number (in the source) */
	const char *meth; /* human function name (usually the method name) */
	struct stack_frame_t *closure_ctx; /* closure context (for functions that have closure parameters) */
	fun_t *closure_funs; /* closure functions (for functions that have closure parameters) */
	int has_broke; /* has an escape occured? 0 if false, label_idx (>0) if true */
	struct nitni_ref_array_link *nitni_local_ref_head; /* points to head of array link contaning local variables used via nitni */
	int REG_size; /* number of local variables */
	val_t REG[1]; /* local variables (flexible array, this must be the last variable is extended in fra struct */
};
extern struct stack_frame_t *stack_frame_head;


typedef enum {true = (1==1),false = (0==1)} bool;

void nit_exit(int);
void nit_abort(const char*, const char*, const char*, int);

#define CALL(r,c) ((VAL2VFT(r)[c].f))
#define ATTR(r,c) (*(val_t*)(VAL2OBJ(r)+c))
#define ATTRS(r,c,o) ((VAL2OBJ(r)+VAL2VFT(r)[c].i)[o].attr)

void prepare_signals(void);
extern classtable_t TAG2VFT[4];
val_t NEW_NativeArray(size_t length, size_t size);
#endif
