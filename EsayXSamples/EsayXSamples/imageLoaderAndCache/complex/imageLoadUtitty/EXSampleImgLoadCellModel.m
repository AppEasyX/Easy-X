//
//  EXSampleImgLoadCellModel.m
//  EasyXSample
//
//  Created by feng lu on 12-11-14.
//  Copyright (c) 2012年 feng lu. All rights reserved.
//

#import "EXSampleImgLoadCellModel.h"

@implementation EXSampleImgLoadCellModel

@synthesize acModel = _acModel;
@synthesize bufferTagrtDict = _bufferTagrtDict;

- (void)dealloc
{
    EX_RELEASE_SAFELY(_acModel);
    EX_RELEASE_SAFELY(_bufferTagrtDict);
    
    [super dealloc];
}
@end
