//
//  ImageLoaderModel.m
//  EasyXSamples
//
//  Created by jf4444 on 13-7-2.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "ImageLoaderModel.h"

@implementation ImageLoaderModel

@synthesize bufferTagrtDict = _bufferTagrtDict;
@synthesize imageUrlString = _imageUrlString;

- (void)dealloc {
    EX_RELEASE_SAFELY(_bufferTagrtDict);
    EX_RELEASE_SAFELY(_imageUrlString);
    
    [super dealloc];
}
@end
