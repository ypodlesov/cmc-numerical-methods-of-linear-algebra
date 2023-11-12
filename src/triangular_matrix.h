#pragma once

#include "matrix.h"
#include "vector.h"

namespace TriangularMatrix {

    template <typename T>
    bool SolveSystem(TMatrix<T>& a, TVector<T>& b);

} // namespace TriangularMatrix
