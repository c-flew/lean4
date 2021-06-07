// Lean compiler output
// Module: Init.Data.Nat.Div
// Imports: Init.WF Init.Data.Nat.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Nat_instDivNat___closed__1;
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_div___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Div_0__Nat_mod_F(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_mod___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Div_0__Nat_div_F___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_instModNat;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Div_0__Nat_div_F(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Div_0__Nat_mod_F___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_instDivNat;
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Nat_instModNat___closed__1;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Div_0__Nat_div_F(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(0u);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_1);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_unsigned_to_nat(0u);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_nat_sub(x_1, x_3);
x_10 = lean_apply_3(x_2, x_9, lean_box(0), x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_10, x_11);
lean_dec(x_10);
return x_12;
}
}
}
}
lean_object* l___private_Init_Data_Nat_Div_0__Nat_div_F___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Nat_Div_0__Nat_div_F(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Nat_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_nat_div(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
#define _init_l_Nat_instDivNat___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Nat_div___boxed), 2, 0);\
__INIT_VAR__ = x_1; goto l_Nat_instDivNat___closed__1_end;\
}\
l_Nat_instDivNat___closed__1_end: ((void) 0);}
#define _init_l_Nat_instDivNat(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = l_Nat_instDivNat___closed__1;\
__INIT_VAR__ = x_1; goto l_Nat_instDivNat_end;\
}\
l_Nat_instDivNat_end: ((void) 0);}
lean_object* l___private_Init_Data_Nat_Div_0__Nat_mod_F(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_3, x_1);
if (x_6 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_nat_sub(x_1, x_3);
x_8 = lean_apply_3(x_2, x_7, lean_box(0), x_3);
return x_8;
}
}
}
}
lean_object* l___private_Init_Data_Nat_Div_0__Nat_mod_F___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Nat_Div_0__Nat_mod_F(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Nat_mod___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_nat_mod(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
#define _init_l_Nat_instModNat___closed__1(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = lean_alloc_closure((void*)(l_Nat_mod___boxed), 2, 0);\
__INIT_VAR__ = x_1; goto l_Nat_instModNat___closed__1_end;\
}\
l_Nat_instModNat___closed__1_end: ((void) 0);}
#define _init_l_Nat_instModNat(__INIT_VAR__) { \
{\
lean_object* x_1; \
x_1 = l_Nat_instModNat___closed__1;\
__INIT_VAR__ = x_1; goto l_Nat_instModNat_end;\
}\
l_Nat_instModNat_end: ((void) 0);}
lean_object* initialize_Init_WF(lean_object*);
lean_object* initialize_Init_Data_Nat_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Nat_Div(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_WF(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
_init_l_Nat_instDivNat___closed__1(l_Nat_instDivNat___closed__1);
lean_mark_persistent(l_Nat_instDivNat___closed__1);
_init_l_Nat_instDivNat(l_Nat_instDivNat);
lean_mark_persistent(l_Nat_instDivNat);
_init_l_Nat_instModNat___closed__1(l_Nat_instModNat___closed__1);
lean_mark_persistent(l_Nat_instModNat___closed__1);
_init_l_Nat_instModNat(l_Nat_instModNat);
lean_mark_persistent(l_Nat_instModNat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
