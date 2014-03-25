/*
 * Variable.h
 *
 *  Created on: Feb 12, 2014
 *      Author: dejan
 */

#pragma once

#include <Python.h>

#include "variable.h"
#include "variable_order.h"

/** Definition of the python Variable object */
typedef struct {
  PyObject_HEAD
  variable_t x;
} Variable;

/** Methods on coefficient rings */
extern PyMethodDef Variable_methods[];

/** Definition of the Variable type */
extern PyTypeObject VariableType;

/** Check if the object is a polynomial */
#define PyVariable_CHECK(arg) \
  (Py_TYPE(arg) == &VariableType)

/** Set the default variable database */
void Variable_init_default_db(void);

/** Get the variable database */
variable_db_t* Variable_get_default_db(void);