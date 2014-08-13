//
//  Subject.h
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2013 Harold Serrano. All rights reserved.
//

#ifndef __ObserverDesignPatter__Subject__
#define __ObserverDesignPatter__Subject__

#include <iostream>
#include "Observer.h"

class Subject{
    
    public:
        virtual void registerObserver(Observer *obs)=0;
        virtual void removeObserver(Observer *obs)=0;
        virtual void notifyObserver()=0;
};


#endif /* defined(__ObserverDesignPatter__Subject__) */
