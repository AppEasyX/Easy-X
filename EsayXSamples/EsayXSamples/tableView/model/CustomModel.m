//
//  CustomModel.m
//  EasyXSamples
//
//  Created by feng  on 13-7-17.
//  Copyright (c) 2013年 feng lu. All rights reserved.
//

#import "CustomModel.h"


@implementation CustomModel
@synthesize text1 = _text1;
@synthesize text2 = _text2;
@synthesize text3 = _text3;

-(void)dealloc
{
    EX_RELEASE_SAFELY(_text1);
    EX_RELEASE_SAFELY(_text2);
    EX_RELEASE_SAFELY(_text3);
    
    [super dealloc];
}
@end
