#ifndef BASICTUTORIAL2_H
#define BASICTUTORIAL2_H

#include "BaseApplication.h"

class BasicTutorial2 : public BaseApplication
{
public:
    BasicTutorial2(void);
    virtual ~BasicTutorial2(void);

protected:
    virtual void createScene(void);
    virtual void createCamera(void);
    virtual void createViewports(void);
};

#endif // BASICTUTORIAL2_H
