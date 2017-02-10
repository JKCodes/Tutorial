//
//  VideoCell.h
//  Tutorials
//
//  Created by Joseph Kim on 2/9/17.
//  Copyright © 2017 Joseph Kim. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoCell : UITableViewCell
-(void) updateUI:(nonnull Video*)video;
@end
