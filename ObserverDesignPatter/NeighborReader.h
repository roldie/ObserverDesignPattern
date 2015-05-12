//
//  NeighborReader.h
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2015 www.cgdemy.com All rights reserved.
//

#ifndef __ObserverDesignPatter__NeighborReader__
#define __ObserverDesignPatter__NeighborReader__

#include <iostream>
#include "Observer.h"
#include "Subject.h"

class NeighborReader:public Observer{
  
public:
    Subject *subject;
    
    NeighborReader(Subject *sub){
        subject=sub;
        subject->registerObserver(this);
    }
    
    void update();
    
};

#endif /* defined(__ObserverDesignPatter__NeighborReader__) */
