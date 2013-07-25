//
//  EXSampleImageLoadImageView.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-11.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "EXSampleImageLoadImageView.h"

@implementation EXSampleImageLoadImageView

@synthesize imageKey = _imageKey;

- (void)dealloc {
    EX_RELEASE_SAFELY(_imageKey);
    
    [super dealloc];
}

@end
