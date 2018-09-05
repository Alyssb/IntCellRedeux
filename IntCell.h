//
// Created by ajs41 on 8/31/2018.
//

#ifndef CSC232_INTCELL_H
#define CSC232_INTCELL_H

class IntCell {
public:
    /**
     *
     * @param initialValue
     */
    IntCell(int initialValue = 0);
    int read() const;

private:

    int storedValue;

};

#endif //CSC232_INTCELL_H
