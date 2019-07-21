//
//  MapPin.h
//  BusinessApplication
//
//  Created by chang on 21/07/2019.
//  Copyright © 2019 chang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MapPin : NSObject <MKAnnotation> {
    
    CLLocationCoordinate2D coordinate;
    
}

@property (nonatomic, assign) CLLocationCoordinate2D coordinate;



@end

NS_ASSUME_NONNULL_END
