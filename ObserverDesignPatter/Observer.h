//
//  Observer.h
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2013 Harold Serrano. All rights reserved.
//

#ifndef __ObserverDesignPatter__Observer__
#define __ObserverDesignPatter__Observer__

#include <iostream>

class Observer{
  
public:
    virtual void update()=0;
};

#endif /* defined(__ObserverDesignPatter__Observer__) */
