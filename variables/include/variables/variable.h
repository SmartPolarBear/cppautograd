//
// Created by bear on 7/5/2022.
//

#pragma once

#include <computational_graph/node.h>

#include <xtensor/xarray.hpp>
#include <Eigen/Core>


namespace cppag::variables
{
class variable
	: public computational_graph::node
{
public:
	using value_type= double;
private:
	bool is_constant_;
	std::vector<std::shared_ptr<computational_graph::node>> children_;
	std::weak_ptr<computational_graph::node> parent_;


};
}