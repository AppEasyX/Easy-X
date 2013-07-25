//
//  EXSampleImageLoadImageView.h
//  EasyXSamples
//
//  Created by jf4444 on 13-7-11.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EXSampleImageLoadImageView : UIImageView {
@private
    NSString *_imageKey;
}

@property (nonatomic, copy) NSString *imageKey;

@end
