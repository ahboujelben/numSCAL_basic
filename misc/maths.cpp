/////////////////////////////////////////////////////////////////////////////
/// Author:      Ahmed Hamdi Boujelben <ahmed.hamdi.boujelben@gmail.com>
/// Created:     2018
/// Copyright:   (c) 2018-2021 Ahmed Hamdi Boujelben
/// Licence:     MIT
/////////////////////////////////////////////////////////////////////////////

#include "maths.h"

namespace maths {

double pi() { return 3.14159265358979323846264; }

double PsiToPa(const double &pressure) { return pressure / 14.50377 * 1e5; }

double PaToPsi(const double &pressure) { return pressure * 14.50377 / 1e5; }

}  // namespace maths
