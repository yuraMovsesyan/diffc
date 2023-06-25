#include "./fraction.h"

typedef struct {
    char symbol;
    Fraction* val;
} Var;

Var* new_var(char symbol, Fraction* val);
Var* new_var_symbol(char symbol);

void set_val_var(Var* var, Fraction* val);

char get_symbol_var(Var* var);
Fraction* get_val_var(Var* var);

void destroy_var(Var* var);