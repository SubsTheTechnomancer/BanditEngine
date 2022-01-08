#pragma once

#ifndef BANDIT_CORE_H
#define BANDIT_CORE_H

#include "precision.h"

namespace bandit {

	/* 3D Vector definition*/

	class Vector3 {

	public:
		real x;
		real y;
		real z;

	private:
	/* pad is defined to ensure 4 word alignment which optimizes runtime.*/
		real pad;

	public:

		Vector3() : x(0), y(0), z(0) {}

		Vector3(const real x, const real y, const real z): x(x), y(y), z(z){}

		void invert() {
			x = -x;
			y = -y;
			z = -z;
		}

	};

}

#endif // !BANDIT_CORE_H