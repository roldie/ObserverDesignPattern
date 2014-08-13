//
//  NewsStation.cpp
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2013 Harold Serrano. All rights reserved.
//

#include "NewsStation.h"

void NewsStation::registerObserver(Observer *obs){
    
    observers.push_back(obs);
    
}

void NewsStation::removeObserver(Observer *obs){
    
    observers.erase(find(observers.begin(), observers.end(), obs));
    
}

void NewsStation::notifyObserver(){

    //search for all register observers
    for (int i=0; i<observers.size(); i++) {

        Observer *observer=(Observer*)observers[i];
        
        //call the observer method- update
        observer->update();
    
    }
     
    
}