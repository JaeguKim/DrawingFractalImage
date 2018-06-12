/*
 * RGB.h
 *
 *  Created on: 2018. 6. 11.
 *      Author: jaegu
 */

#ifndef RGB_H_
#define RGB_H_

namespace caveofprogramming {

struct RGB {
	double r;
	double g;
	double b;

	RGB(double r, double g, double b);

};

RGB operator-(const RGB& first, const RGB& second);

} /* namespace caveofprogramming */


#endif /* RGB_H_ */
