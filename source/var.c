#include "./header/var.h"
#include <stdlib.h>

Var* new_var(char symbol, Fraction* val)
{
    Var* var = (Var*)malloc(sizeof(Var));

    if (var != NULL)
    {
        var->symbol = symbol;
        var->val = val;
    }

    return var;
}

Var* new_var_symbol(char symbol)
{
    return new_var(symbol, new_fraction_default());
}

void set_val_var(Var* var, Fraction* val)
{
    destroy_fraction(var->val);

    var->val = val;
}

char get_symbol_var(Var* var)
{
    return var->symbol;
}

Fraction* get_val_var(Var* var)
{
    return var->val;
}

void destroy_var(Var* var)
{
    destroy_fraction(var->val);

    if (var != NULL) free(var);
}