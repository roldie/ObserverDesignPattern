//
//  NewsReader.h
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2015 www.cgdemy.com All rights reserved.
//

#ifndef __ObserverDesignPatter__NewsReader__
#define __ObserverDesignPatter__NewsReader__

#include <iostream>
#include "Observer.h"
#include "Subject.h"

class NewsReader:public Observer{
    
public:
    Subject *subject;
    
    //Note that we are registering the newsreader to the Subject class during initialization
    NewsReader(Subject *sub){
        subject=sub;
        subject->registerObserver(this);
    }
    
    void update();
    
};


#endif /* defined(__ObserverDesignPatter__NewsReader__) */
