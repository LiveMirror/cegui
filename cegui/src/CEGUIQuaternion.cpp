/***********************************************************************
    filename:   CEGUIQuaternion.cpp
    created:    3/1/2011
    author:     Martin Preisler

    purpose:    Implements the Quaternion class
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2011 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/

#include "CEGUIQuaternion.h"

// Start of CEGUI namespace section
namespace CEGUI
{

const Quaternion Quaternion::ZERO(0, 0, 0, 0);
const Quaternion Quaternion::IDENTITY(1, 0, 0, 0);

//----------------------------------------------------------------------------//
Quaternion Quaternion::slerp(float t, const Quaternion& left, const Quaternion& right, bool shortestPath)
{
    // Geometric Tools, LLC
    // Copyright (c) 1998-2010
    // Distributed under the Boost Software License, Version 1.0.
    // http://www.boost.org/LICENSE_1_0.txt
    // http://www.geometrictools.com/License/Boost/LICENSE_1_0.txt

    float vcos = left.dot(right);
    Quaternion _right;

    // Do we need to invert rotation?
    if (vcos < 0.0f && shortestPath)
    {
        vcos = -vcos;
        _right = -right;
    }
    else
    {
        _right = right;
    }

    if (fabs(vcos) < 1 - std::numeric_limits<float>::epsilon())
    {
        // Standard case (slerp)
        const float vsin = sqrtf(1.0f - vcos * vcos);
        const float angle = atan2(vsin, vcos);
        const float invSin = 1.0f / vsin;
        const float coeff0 = sin((1.0f - t) * angle) * invSin;
        const float coeff1 = sin((t) * angle) * invSin;

        return coeff0 * left + coeff1 * _right;
    }
    else
    {
        // There are two situations:
        // 1. "left" and "right" are very close (cos ~= +1), so we can do a linear
        //    interpolation safely.
        // 2. "left" and "right" are almost inverse of each other (cos ~= -1), there
        //    are an infinite number of possibilities interpolation. but we haven't
        //    have method to fix this case, so just use linear interpolation here.

        Quaternion ret = (1.0f - t) * left + t * _right;
        // taking the complement requires renormalisation
        ret.normalise();
        return ret;
    }
}

//----------------------------------------------------------------------------//

} // End of  CEGUI namespace section
