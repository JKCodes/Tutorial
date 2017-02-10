//
//  Video.h
//  Tutorials
//
//  Created by Joseph Kim on 2/10/17.
//  Copyright © 2017 Joseph Kim. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Video : NSObject
@property(nonatomic,strong) NSString *videoTitle;
@property(nonatomic,strong) NSString *videoDescription;
@property(nonatomic,strong) NSString *videoIframe;
@property(nonatomic,strong) NSString *thumbnailUrl;

@end
