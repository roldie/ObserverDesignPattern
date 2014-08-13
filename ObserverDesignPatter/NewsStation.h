//
//  NewsStation.h
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2013 Harold Serrano. All rights reserved.
//

#ifndef __ObserverDesignPatter__NewsStation__
#define __ObserverDesignPatter__NewsStation__

#include <iostream>
#include "Subject.h"
#include <vector>
#include <list>
#include <iterator>

using namespace std;

class NewsStation:public Subject{
  
public:
   
    //vector to store all register observers
    vector<Observer*> observers;
    
    //constructor
    NewsStation(){};
    
    //method to register observer
    void registerObserver(Observer *obs);
    //method to remove observer
    void removeObserver(Observer *obs);
    //method to notify observer
    void notifyObserver();
    
};

#endif /* defined(__ObserverDesignPatter__NewsStation__) */
