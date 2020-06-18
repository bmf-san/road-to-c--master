#ifdef _CHICKEN_H
#define _CHICKEN_H_

#include "bird.h"

class CCHicken : public CBird {
    public:
        void sing() { cout << "コケコッコー" << endl; }
        void fly() { cout << "にわとりは飛べません" << endl; }
};

#endif 