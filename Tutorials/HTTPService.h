//
//  HTTPService.h
//  Tutorials
//
//  Created by Joseph Kim on 2/9/17.
//  Copyright © 2017 Joseph Kim. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^onComplete)(NSDictionary * __nullable dataDict, NSString *__nullable errMessage);

@interface HTTPService : NSObject

+ (id) instance;
- (void) getTutorials:(nullable onComplete)completionHandler;

@end
