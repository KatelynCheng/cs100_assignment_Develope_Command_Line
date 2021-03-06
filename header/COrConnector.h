#ifndef CS100PROJ_CORCONNECTOR_H
#define CS100PROJ_CORCONNECTOR_H

#include "CConnector.h"

class COrConnector : public CConnector {

public:
    COrConnector() {}

    COrConnector(CBase *l, CBase *r) : CConnector(l, r) {}

    bool execute() {
        bool bSuccessful = false;
        if (leftSideItems) {
            bSuccessful = leftSideItems->execute();
        }

        if (bSuccessful) {
            return true;
        }

        if (rightSideItems) {
            bSuccessful = rightSideItems->execute();
        }

        return bSuccessful;
    }
};


#endif //CS100PROJ_CORCONNECTOR_H