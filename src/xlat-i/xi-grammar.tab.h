/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MODULE = 258,
    MAINMODULE = 259,
    EXTERN = 260,
    READONLY = 261,
    INITCALL = 262,
    INITNODE = 263,
    INITPROC = 264,
    PUPABLE = 265,
    CHARE = 266,
    MAINCHARE = 267,
    GROUP = 268,
    NODEGROUP = 269,
    ARRAY = 270,
    MESSAGE = 271,
    CONDITIONAL = 272,
    CLASS = 273,
    INCLUDE = 274,
    STACKSIZE = 275,
    THREADED = 276,
    TEMPLATE = 277,
    SYNC = 278,
    IGET = 279,
    EXCLUSIVE = 280,
    IMMEDIATE = 281,
    SKIPSCHED = 282,
    INLINE = 283,
    VIRTUAL = 284,
    MIGRATABLE = 285,
    AGGREGATE = 286,
    CREATEHERE = 287,
    CREATEHOME = 288,
    NOKEEP = 289,
    NOTRACE = 290,
    APPWORK = 291,
    VOID = 292,
    CONST = 293,
    NOCOPY = 294,
    NOCOPYPOST = 295,
    PACKED = 296,
    VARSIZE = 297,
    ENTRY = 298,
    FOR = 299,
    FORALL = 300,
    WHILE = 301,
    WHEN = 302,
    OVERLAP = 303,
    SERIAL = 304,
    IF = 305,
    ELSE = 306,
    PYTHON = 307,
    LOCAL = 308,
    NAMESPACE = 309,
    USING = 310,
    IDENT = 311,
    NUMBER = 312,
    LITERAL = 313,
    CPROGRAM = 314,
    HASHIF = 315,
    HASHIFDEF = 316,
    INT = 317,
    LONG = 318,
    SHORT = 319,
    CHAR = 320,
    FLOAT = 321,
    DOUBLE = 322,
    UNSIGNED = 323,
    ACCEL = 324,
    READWRITE = 325,
    WRITEONLY = 326,
    ACCELBLOCK = 327,
    MEMCRITICAL = 328,
    REDUCTIONTARGET = 329,
    CASE = 330,
    TYPENAME = 331
  };
#endif
/* Tokens.  */
#define MODULE 258
#define MAINMODULE 259
#define EXTERN 260
#define READONLY 261
#define INITCALL 262
#define INITNODE 263
#define INITPROC 264
#define PUPABLE 265
#define CHARE 266
#define MAINCHARE 267
#define GROUP 268
#define NODEGROUP 269
#define ARRAY 270
#define MESSAGE 271
#define CONDITIONAL 272
#define CLASS 273
#define INCLUDE 274
#define STACKSIZE 275
#define THREADED 276
#define TEMPLATE 277
#define SYNC 278
#define IGET 279
#define EXCLUSIVE 280
#define IMMEDIATE 281
#define SKIPSCHED 282
#define INLINE 283
#define VIRTUAL 284
#define MIGRATABLE 285
#define AGGREGATE 286
#define CREATEHERE 287
#define CREATEHOME 288
#define NOKEEP 289
#define NOTRACE 290
#define APPWORK 291
#define VOID 292
#define CONST 293
#define NOCOPY 294
#define NOCOPYPOST 295
#define PACKED 296
#define VARSIZE 297
#define ENTRY 298
#define FOR 299
#define FORALL 300
#define WHILE 301
#define WHEN 302
#define OVERLAP 303
#define SERIAL 304
#define IF 305
#define ELSE 306
#define PYTHON 307
#define LOCAL 308
#define NAMESPACE 309
#define USING 310
#define IDENT 311
#define NUMBER 312
#define LITERAL 313
#define CPROGRAM 314
#define HASHIF 315
#define HASHIFDEF 316
#define INT 317
#define LONG 318
#define SHORT 319
#define CHAR 320
#define FLOAT 321
#define DOUBLE 322
#define UNSIGNED 323
#define ACCEL 324
#define READWRITE 325
#define WRITEONLY 326
#define ACCELBLOCK 327
#define MEMCRITICAL 328
#define REDUCTIONTARGET 329
#define CASE 330
#define TYPENAME 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 53 "xi-grammar.y" /* yacc.c:1909  */

  AstChildren<Module> *modlist;
  Module *module;
  ConstructList *conslist;
  Construct *construct;
  TParam *tparam;
  TParamList *tparlist;
  Type *type;
  PtrType *ptype;
  NamedType *ntype;
  FuncType *ftype;
  Readonly *readonly;
  Message *message;
  Chare *chare;
  Entry *entry;
  EntryList *entrylist;
  Parameter *pname;
  ParamList *plist;
  Template *templat;
  TypeList *typelist;
  AstChildren<Member> *mbrlist;
  Member *member;
  TVar *tvar;
  TVarList *tvarlist;
  Value *val;
  ValueList *vallist;
  MsgVar *mv;
  MsgVarList *mvlist;
  PUPableClass *pupable;
  IncludeFile *includeFile;
  const char *strval;
  int intval;
  unsigned int cattr; // actually Chare::attrib_t, but referring to that creates nasty #include issues
  SdagConstruct *sc;
  IntExprConstruct *intexpr;
  WhenConstruct *when;
  SListConstruct *slist;
  CaseListConstruct *clist;
  OListConstruct *olist;
  SdagEntryConstruct *sentry;
  XStr* xstrptr;
  AccelBlock* accelBlock;

#line 250 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
