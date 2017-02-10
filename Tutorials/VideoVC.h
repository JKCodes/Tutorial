//
//  VideoVC.h
//  Tutorials
//
//  Created by Joseph Kim on 2/10/17.
//  Copyright © 2017 Joseph Kim. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoVC : UIViewController <UIWebViewDelegate>
@property (nonatomic, strong) Video *video;
@end
