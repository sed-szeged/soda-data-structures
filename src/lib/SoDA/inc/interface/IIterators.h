/*
 * Copyright (C): 2013-2014 Department of Software Engineering, University of Szeged
 *
 * Authors: László Langó <lango@inf.u-szeged.hu>
 *          Tamás Gergely <gertom@inf.u-szeged.hu>
 *
 * This file is part of SoDA.
 *
 *  SoDA is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  SoDA is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with SoDA.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ITERATOR_H
#define ITERATOR_H

namespace soda {

/**
 * @brief The IBitListIterator class is an interface class for bitlist iterator.
 */
class IBitListIterator {
public:
    virtual ~IBitListIterator() {}

    virtual IBitListIterator& operator++() = 0;
    virtual IBitListIterator& operator++(int) = 0;

    virtual bool operator==(IBitListIterator&) = 0;
    virtual bool operator!=(IBitListIterator&) = 0;
    virtual bool operator*() = 0;
};

/**
 * @brief The IBitMatrixIterator class is an interface class for bitmatrix iterator.
 */
class IBitMatrixIterator {
public:
    virtual ~IBitMatrixIterator() {}

    virtual IBitMatrixIterator& operator++() = 0;
    virtual IBitMatrixIterator& operator++(int) = 0;

    virtual bool operator==(IBitMatrixIterator&) = 0;
    virtual bool operator!=(IBitMatrixIterator&) = 0;

    virtual bool operator*() = 0;
};

} // namespace soda

#endif /* ITERATOR_H */
