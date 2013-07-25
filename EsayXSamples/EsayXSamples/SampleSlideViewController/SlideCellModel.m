//
//  SlideCellModel.m
//  EsayXSamples
//
//  Created by jf4444 on 13-6-9.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "SlideCellModel.h"

@implementation SlideCellModel

@synthesize title = _title;


#pragma mark -
#pragma mark - LIFE_CIRCLE
- (void)dealloc {
    EX_RELEASE_SAFELY(_title);
    
    [super dealloc];
}


- (id)init {
    self = [super init];
    if (self) {
        // custom init
    }
    
    return self;
}

@end
