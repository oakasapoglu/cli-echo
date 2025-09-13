/* Generated from cli.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.4.0 (rev 1a1d1495)
   macosx-unix-clang-arm64 [ 64bit dload ptables ]
   command line: cli.scm -output-file cli.c
   uses: eval library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[14];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,114,101,115,116,32,114,101,115,117,108,116,41,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,21),40,106,111,105,110,45,119,105,116,104,45,115,112,97,99,101,32,108,115,116,41,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,105,32,114,101,115,117,108,116,41,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,21),40,105,110,116,101,114,112,114,101,116,45,101,115,99,97,112,101,115,32,115,41,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_154)
static void C_ccall f_154(C_word c,C_word *av) C_noret;
C_noret_decl(f_157)
static void C_ccall f_157(C_word c,C_word *av) C_noret;
C_noret_decl(f_159)
static void C_ccall f_159(C_word c,C_word *av) C_noret;
C_noret_decl(f_179)
static void C_fcall f_179(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_197)
static void C_ccall f_197(C_word c,C_word *av) C_noret;
C_noret_decl(f_203)
static void C_ccall f_203(C_word c,C_word *av) C_noret;
C_noret_decl(f_212)
static void C_fcall f_212(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_248)
static void C_ccall f_248(C_word c,C_word *av) C_noret;
C_noret_decl(f_265)
static void C_ccall f_265(C_word c,C_word *av) C_noret;
C_noret_decl(f_282)
static void C_ccall f_282(C_word c,C_word *av) C_noret;
C_noret_decl(f_293)
static void C_ccall f_293(C_word c,C_word *av) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word *av) C_noret;
C_noret_decl(f_330)
static void C_ccall f_330(C_word c,C_word *av) C_noret;
C_noret_decl(f_333)
static void C_ccall f_333(C_word c,C_word *av) C_noret;
C_noret_decl(f_336)
static void C_ccall f_336(C_word c,C_word *av) C_noret;
C_noret_decl(f_339)
static void C_ccall f_339(C_word c,C_word *av) C_noret;
C_noret_decl(f_345)
static void C_ccall f_345(C_word c,C_word *av) C_noret;
C_noret_decl(f_349)
static void C_ccall f_349(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_179)
static void C_ccall trf_179(C_word c,C_word *av) C_noret;
static void C_ccall trf_179(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_179(t0,t1,t2,t3);}

C_noret_decl(trf_212)
static void C_ccall trf_212(C_word c,C_word *av) C_noret;
static void C_ccall trf_212(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_212(t0,t1,t2,t3);}

/* k152 */
static void C_ccall f_154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_154,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_157,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k155 in k152 */
static void C_ccall f_157(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_157,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[0]+1 /* (set! join-with-space ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_159,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! interpret-escapes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_203,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("cli.scm:36: chicken.process-context#command-line-arguments"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
tp(2,av2);}}

/* join-with-space in k155 in k152 */
static void C_ccall f_159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_159,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
t4=C_i_car(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_179,a[2]=t6,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_179(t8,t1,t3,t4);}}

/* loop in join-with-space in k155 in k152 */
static void C_fcall f_179(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_179,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_197,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("cli.scm:14: scheme#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[3];
av2[4]=C_i_car(t2);
tp(5,av2);}}}

/* k195 in loop in join-with-space in k155 in k152 */
static void C_ccall f_197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_197,c,av);}
C_trace(C_text("cli.scm:13: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_179(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* interpret-escapes in k155 in k152 */
static void C_ccall f_203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_203,c,av);}
a=C_alloc(8);
t3=C_i_string_length(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_212,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word)li2),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_212(t7,t1,C_fix(0),lf[8]);}

/* loop in interpret-escapes in k155 in k152 */
static void C_fcall f_212(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(95,0,3)))){
C_save_and_reclaim_args((void *)trf_212,4,t0,t1,t2,t3);}
a=C_alloc(95);
if(C_truep(C_i_greater_or_equalp(t2,((C_word*)t0)[2]))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_string_ref(((C_word*)t0)[3],t2);
t5=C_s_a_i_plus(&a,2,t2,C_fix(1));
t6=C_i_lessp(t5,((C_word*)t0)[2]);
t7=(C_truep(t6)?C_i_char_equalp(t4,C_make_character(92)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_s_a_i_plus(&a,2,t2,C_fix(1));
t9=C_i_string_ref(((C_word*)t0)[3],t8);
if(C_truep(C_i_char_equalp(t9,C_make_character(92)))){
t10=C_s_a_i_plus(&a,2,t2,C_fix(2));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_248,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("cli.scm:28: scheme#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t11;
av2[2]=t3;
av2[3]=lf[5];
tp(4,av2);}}
else{
if(C_truep(C_i_char_equalp(t9,C_make_character(110)))){
t10=C_s_a_i_plus(&a,2,t2,C_fix(2));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_265,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("cli.scm:29: scheme#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t11;
av2[2]=t3;
av2[3]=lf[6];
tp(4,av2);}}
else{
if(C_truep(C_i_char_equalp(t9,C_make_character(116)))){
t10=C_s_a_i_plus(&a,2,t2,C_fix(2));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_282,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("cli.scm:30: scheme#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t11;
av2[2]=t3;
av2[3]=lf[7];
tp(4,av2);}}
else{
t10=C_s_a_i_plus(&a,2,t2,C_fix(2));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_293,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t12=C_a_i_string(&a,2,C_make_character(92),t9);
C_trace(C_text("cli.scm:31: scheme#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t11;
av2[2]=t3;
av2[3]=t12;
tp(4,av2);}}}}}
else{
t8=C_s_a_i_plus(&a,2,t2,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_a_i_string(&a,1,t4);
C_trace(C_text("cli.scm:33: scheme#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t9;
av2[2]=t3;
av2[3]=t10;
tp(4,av2);}}}}

/* k246 in loop in interpret-escapes in k155 in k152 */
static void C_ccall f_248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_248,c,av);}
C_trace(C_text("cli.scm:28: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_212(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k263 in loop in interpret-escapes in k155 in k152 */
static void C_ccall f_265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_265,c,av);}
C_trace(C_text("cli.scm:29: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_212(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k280 in loop in interpret-escapes in k155 in k152 */
static void C_ccall f_282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_282,c,av);}
C_trace(C_text("cli.scm:30: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_212(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k291 in loop in interpret-escapes in k155 in k152 */
static void C_ccall f_293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_293,c,av);}
C_trace(C_text("cli.scm:31: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_212(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k310 in loop in interpret-escapes in k155 in k152 */
static void C_ccall f_312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_312,c,av);}
C_trace(C_text("cli.scm:33: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_212(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k328 in k155 in k152 */
static void C_ccall f_330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_330,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[9]+1 /* (set! args ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("cli.scm:38: join-with-space"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[0]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[0]+1);
av2[1]=t3;
av2[2]=C_fast_retrieve(lf[9]);
tp(3,av2);}}

/* k331 in k328 in k155 in k152 */
static void C_ccall f_333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_333,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_349,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("cli.scm:39: interpret-escapes"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t3;
av2[2]=t1;
tp(3,av2);}}

/* k334 in k331 in k328 in k155 in k152 */
static void C_ccall f_336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_336,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("cli.scm:40: scheme#newline"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[11]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t2;
tp(2,av2);}}

/* k337 in k334 in k331 in k328 in k155 in k152 */
static void C_ccall f_339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_339,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[10]);
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t2;
tp(2,av2);}}

/* k343 in k337 in k334 in k331 in k328 in k155 in k152 */
static void C_ccall f_345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_345,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k347 in k331 in k328 in k155 in k152 */
static void C_ccall f_349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_349,c,av);}
C_trace(C_text("cli.scm:39: scheme#display"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(56))){
C_save(t1);
C_rereclaim2(56*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,14);
lf[0]=C_h_intern(&lf[0],15, C_text("join-with-space"));
lf[1]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[2]=C_h_intern(&lf[2],20, C_text("scheme#string-append"));
lf[3]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001 "));
lf[4]=C_h_intern(&lf[4],17, C_text("interpret-escapes"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\134"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\012"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376B\000\000\001\011"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376B\000\000\000"));
lf[9]=C_h_intern(&lf[9],4, C_text("args"));
lf[10]=C_h_intern(&lf[10],34, C_text("chicken.base#implicit-exit-handler"));
lf[11]=C_h_intern(&lf[11],14, C_text("scheme#newline"));
lf[12]=C_h_intern(&lf[12],14, C_text("scheme#display"));
lf[13]=C_h_intern(&lf[13],46, C_text("chicken.process-context#command-line-arguments"));
C_register_lf2(lf,14,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_154,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[20] = {
{C_text("f_154:cli_2escm"),(void*)f_154},
{C_text("f_157:cli_2escm"),(void*)f_157},
{C_text("f_159:cli_2escm"),(void*)f_159},
{C_text("f_179:cli_2escm"),(void*)f_179},
{C_text("f_197:cli_2escm"),(void*)f_197},
{C_text("f_203:cli_2escm"),(void*)f_203},
{C_text("f_212:cli_2escm"),(void*)f_212},
{C_text("f_248:cli_2escm"),(void*)f_248},
{C_text("f_265:cli_2escm"),(void*)f_265},
{C_text("f_282:cli_2escm"),(void*)f_282},
{C_text("f_293:cli_2escm"),(void*)f_293},
{C_text("f_312:cli_2escm"),(void*)f_312},
{C_text("f_330:cli_2escm"),(void*)f_330},
{C_text("f_333:cli_2escm"),(void*)f_333},
{C_text("f_336:cli_2escm"),(void*)f_336},
{C_text("f_339:cli_2escm"),(void*)f_339},
{C_text("f_345:cli_2escm"),(void*)f_345},
{C_text("f_349:cli_2escm"),(void*)f_349},
{C_text("toplevel:cli_2escm"),(void*)C_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|safe globals: (interpret-escapes join-with-space) 
o|replaced variables: 53 
o|removed binding forms: 10 
o|removed binding forms: 41 
o|simplifications: ((if . 1) (##core#call . 24)) 
o|  call simplifications:
o|    scheme#string-length
o|    scheme#>=
o|    scheme#<
o|    scheme#string-ref	2
o|    scheme#char=?	4
o|    scheme#string	2
o|    scheme#+	7
o|    scheme#null?	2
o|    scheme#cdr	2
o|    scheme#car	2
o|contracted procedure: k164 
o|contracted procedure: k171 
o|contracted procedure: k175 
o|contracted procedure: k184 
o|contracted procedure: k191 
o|contracted procedure: k199 
o|contracted procedure: k205 
o|contracted procedure: k217 
o|contracted procedure: k220 
o|contracted procedure: k324 
o|contracted procedure: k317 
o|contracted procedure: k226 
o|contracted procedure: k299 
o|contracted procedure: k229 
o|contracted procedure: k235 
o|contracted procedure: k242 
o|contracted procedure: k252 
o|contracted procedure: k259 
o|contracted procedure: k269 
o|contracted procedure: k276 
o|contracted procedure: k287 
o|contracted procedure: k295 
o|contracted procedure: k306 
o|contracted procedure: k314 
o|simplifications: ((let . 7)) 
o|removed binding forms: 24 
o|customizable procedures: (loop22 loop15) 
o|calls to known targets: 8 
o|fast box initializations: 2 
*/
/* end of file */
