//
//  EXSampleWebBaseOprator.m
//  EsayXSamples
//
//  Created by jf4444 on 12-8-27.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXSampleWebBaseOprator.h"

@interface  EXSampleWebBaseOprator()

@end

@implementation EXSampleWebBaseOprator

@synthesize responseCode = _responseCode;
@synthesize responseMsg = _responseMsg;
@synthesize contentDict = _contentDict;

- (void)dealloc {
    EX_RELEASE_SAFELY(_responseCode);
    EX_RELEASE_SAFELY(_responseMsg);
    EX_RELEASE_SAFELY(_contentDict);
    
    [super dealloc];
}

- (id)init {
    self = [super init];
    if (self) {
       
    }
    
    return self;
}


- (void)fillModelWithResponseDict:(NSDictionary *)dict {
    // should implement by subClass
}

@end
