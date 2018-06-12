/*
 * gmres.hpp
 *
 *  Created on: 06.05.2018
 *      Author: Robert
 */

#ifndef GMRES_HPP_

#include "arnoldi_ca.hpp"
#include "spmv.hpp"
#include "tsqr.hpp"

#define GMRES_HPP_

class gmres {
public:
	gmres();
	virtual ~gmres();
};

#endif /* GMRES_HPP_ */
