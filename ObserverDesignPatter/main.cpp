//
//  main.cpp
//  ObserverDesignPatter
//
//  Created by Harold Serrano on 3/30/13.
//  Copyright (c) 2015 www.cgdemy.com All rights reserved.
//

#include <iostream>
#include "NewsReader.h"
#include "NewsStation.h"
#include "NeighborReader.h"

int main(int argc, const char * argv[])
{

    //create our newsStation. NOTE how I'm coding to the interface "subject", not to the implementation "newsStation"
    Subject *newsStation=new NewsStation();
    
    //creating our newsReader class. When the constructor gets called, the newsReader class is register with the newsStation
    Observer *newsReader=new NewsReader(newsStation);

    //creating our neighborReader class. When the constructor gets called, the neighborReader class is register with the newsStation
    Observer *neighborReader=new NeighborReader(newsStation);
    
    //the newsStation notifies all observers.
    newsStation->notifyObserver();
    
    return 0;
}

