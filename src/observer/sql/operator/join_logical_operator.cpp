#include "sql/operator/join_logical_operator.h"

JoinLogicalOperator::JoinLogicalOperator(std::unique_ptr<Expression> expression)
{
  expressions_.emplace_back(std::move(expression));
}