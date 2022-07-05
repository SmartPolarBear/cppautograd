//
// Created by bear on 7/5/2022.
//

#pragma once

#include <memory>
#include <vector>

namespace cppag::computational_graph
{
class node
{
public:
	virtual std::vector<std::shared_ptr<node>> children() = 0;

	virtual std::weak_ptr<node> parent(const std::shared_ptr<node> &) = 0;
};
} // namespace cppag::computational_graph
