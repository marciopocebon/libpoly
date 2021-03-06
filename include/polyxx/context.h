#pragma once

#include "../polynomial_context.h"
#include "../variable_db.h"
#include "../variable_order.h"
#include "utils.h"

namespace poly {

  class Context {
    /** A variable database. */
    deleting_unique_ptr<lp_variable_db_t> mVariableDB;
    /** A variable ordering. */
    deleting_unique_ptr<lp_variable_order_t> mVariableOrder;
    /** A polynomial context. */
    deleting_unique_ptr<lp_polynomial_context_t> mPolynomialContext;

   public:
    Context();
    /** Get a non-const pointer to the internal lp_variable_db_t. Handle with
     * care!
     */
    lp_variable_db_t* get_variable_db() const;

    /** Get a non-const pointer to the internal lp_variable_order_t. Handle with
     * care!
     */
    lp_variable_order_t* get_variable_order() const;

    /** Get a non-const pointer to the internal lp_polynomial_context_t. Handle
     * with care!
     */
    lp_polynomial_context_t* get_polynomial_context() const;

    static const Context& get_context();
  };

}  // namespace poly