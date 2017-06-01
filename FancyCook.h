//
//  FancyCook.h
//  Foodtruck
//
//  Created by swcl on 2017-06-01.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"

@interface FancyCook : NSObject <FoodTruckDelegate>

-(double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food;


@end
