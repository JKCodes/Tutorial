//
//  HTTPService.m
//  Tutorials
//
//  Created by Joseph Kim on 2/9/17.
//  Copyright © 2017 Joseph Kim. All rights reserved.
//

#import "HTTPService.h"

@implementation HTTPService

+ (id) instance {
    static HTTPService *sharedInstance = nil;
    
    @synchronized (self) {
        if (sharedInstance == nil)
            sharedInstance = [[self alloc] init];
    }
    
    return sharedInstance;
}

@end
